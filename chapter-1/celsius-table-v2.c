#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

float convert_celsius(float celsius);

/*
 * celsius-fahrenheit table - v2
 * now using a convert function
 */
int main()
{
	float celsius;

	printf("Celsius-Fahrenheit Table\nby Wesley Jr.\n\n");
	printf("°C\t °F\n");
	for (celsius = UPPER; celsius >= LOWER; celsius -= STEP)
		printf("%3.0f\t%6.1f\n", celsius, convert_celsius(celsius));

	return 0;
}

float convert_celsius(float c)
{
	c = (c + 32.0) / 9.0 * 5.0;
	return c;
}
