#include <stdio.h>

/* 
 * blank fixer - v1
 * this program outputs a string replacing every blanks by a single blank
 */
int main()
{
	/* if the input is a blank the program will ignore any other blank */
	for (int c; (c = getchar()) != EOF; putchar(c)) {
		if (c == ' ') {
			putchar(' ');
			while ((c = getchar()) == ' ')
				;
		}
	}

	return 0;
}
