// Exercise 1-15. Rewrite the temperature conversion program of Section 1.2 to
// use a function for conversion.

#include <stdio.h>

float fahr_to_celcius(float fahr);

int main()
{
	float fahr, celcius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celcius = fahr_to_celcius(fahr);
		printf("%3.0f %6.1f\n", fahr, celcius);
		fahr = fahr + step;
	}
}

float fahr_to_celcius(float fahr)
{
	float celcius = (5.0/9.0) * (fahr-32.0);
	return celcius;
}
