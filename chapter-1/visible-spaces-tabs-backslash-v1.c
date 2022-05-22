#include <stdio.h>

/*
 * visible spaces, tabs and backslash - v1
 * this program gets every whitespaces and show them up
 */
int main()
{
	int c;

	/* replace characters */
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			c -= '\t';
			putchar('\\');
			putchar('t');
		} else if (c == '\b') {
			c -= '\b';
			putchar('\\');
			putchar('b');
		} else if (c == '\\') {
			c -= '\\';
			putchar('\\');
			putchar('\\');
		} else {
			putchar(c);
		}
	}

	return 0;
}
