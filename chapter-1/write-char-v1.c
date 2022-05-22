#include <stdio.h>

/* 
 * write char - v1
 * get characters and print them in the screen
 */
int main()
{
	int c;
	while ((c = getchar()) != EOF)
		putchar(c);
	return 0;
}
