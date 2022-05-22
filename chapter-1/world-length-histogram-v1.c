#include <stdio.h>

#define MAXL 20

/*
 * world length histogram - v1
 *
 * NOTES:
 * 1. It doesn't count the last word characters if the user sends EOF
 * 2. It just shows words up to 20 length characters in the histogram
 */
int main()
{
	int c, i, bar, length[MAXL];
	/* give value 0 to every subscript */
	for (i = 0; i <= MAXL; ++i)
		length[i] = 0;

	printf("Words length histogram v1\nby Wesley Jr.\n\n");
	printf("Input: ");

	i = 0;
	while ((c = getchar()) != EOF) {
		/* if inside a word, count its characters */
		if (c != ' ' && c != '\t' && c != '\n' && c != EOF)
			++i;
		/* else add +1 to the respective word length array */
		else {
			++length[0]; /* count blanks, tabs and new lines */
			++length[i];
			i = 0;
		}
	}

	/* print the histogram */
	printf("\n");
	for (i = 0; i <= MAXL; ++i) {
		if (i == 0)
			printf("\n   blank characters |");
		else {
			printf("\n%2d characters words |", i);
		}
		for (bar = 1; bar <= length[i]; ++bar)
			printf("-");
	}
	printf("\n");

	return 0;
}
