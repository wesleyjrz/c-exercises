#include <stdio.h>

#define LIM 1000 /* max supported length */
#define MIN 80   /* minimun line length to print */

int getsline(char line[]);
void append(char to[], char from[]);

/*
 * print long lines: this program reads the input and prints all the lines that
 * are longer than "MIN" characters
 */
int main()
{
	int len;         /* current line length */
	char lines[LIM]; /* stored lines */
	char cline[LIM]; /* current line */

	/* append current lines that are greater than MIN to a new array */
	lines[0] = cline[0] = '\0';
	while ((len = getsline(cline)) > 0) {
		if (len >= MIN) {
			append(lines, cline);
			len = 0;
		}
	}

	/* print lines */
	if (lines[0] != '\0')
		printf("\nLines greater than %d characters:\n%s\n", MIN, lines);

	return 0;
}

/* getsline: read a line into "s", return length */
int getsline(char s[])
{
	int c, i;

	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';

	return i;
}

/*
 * append: copy to a string characters from another string, appending after the
 * end of the string
 */
void append(char to[], char from[])
{
	int i;
	int j; /* last line */

	for (j = 0; to[j] != '\0'; ++j)
		;

	for (i = 0; (to[j] = from[i]) != '\0'; ++i)
		++j;
}
