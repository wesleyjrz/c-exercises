#include <stdio.h>

#define MAXL 93 /* total amount of visible ASCII characters */

/*
 * characters frequency histogram - v1
 *
 * this program prints a histogram showing the frequencies of different
 * characters in the input
 */
int main()
{
	int c, i, bar, length[MAXL];
	for (i = 0; i <= MAXL; ++i)
		length[i] = 0;

	printf("Characters frequency histogram v1\nby Wesley Jr.\n\n");
	printf("Input: ");

	/*
   * the first visible character is '!' which 33 in ASCII, so the program needs
	 * to subtract 33 from every character to put them in the right place
	 */
	while ((c = getchar()) != EOF)
		if (c >= 33 && c <= 126)
			++length[c - 33];

	/* print the histogram only with used characters */
	printf("\n\nchar | frequency\n----------------\n");
	for (i = 0; i <= MAXL; ++i) {
		if (length[i] > 0) {
			printf("  %c  | ", i + 33);
			 for (bar = 1; bar <= length[i]; ++bar)
				 printf("-");
			printf("\n");
		}
	}

	return 0;
}
