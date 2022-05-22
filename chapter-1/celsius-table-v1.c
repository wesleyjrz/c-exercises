#include <stdio.h>

#define LOWER 0   /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP  20  /* step size */

/*
 * celsius-fahrenheit table - v1
 * for celsius = 0, 20, ..., 300
 */
int main()
{
	float celsius;
	printf("Celsius-Fahrenheit Table\nby Wesley Jr.\n\n");
	printf("°C\t °F\n");
	for (celsius = UPPER; celsius >= LOWER; celsius -= STEP)
		printf("%3.0f\t%6.1f\n", celsius, (celsius + 32.0) / 9.0 * 5.0);
	return 0;
}
