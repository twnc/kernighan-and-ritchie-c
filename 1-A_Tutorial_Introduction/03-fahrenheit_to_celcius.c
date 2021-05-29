#include<stdio.h>

// print Fahrenheit-Celcius table for fahr = 0, 20, ..., 300; floaing point version
// Exercise 1-3. Modify the temperature conversion program to print a heading
// above the table

main()
{
	float fahr, celcius;
	int lower, upper, step;

	lower = 0; // lower limit of temperature table
	upper = 300; // upper limit
	step = 20; // step size

	fahr = lower;
	printf(" Fahrenheit |  Celcius\n");
	printf("------------------------\n");
	while (fahr <= upper) {
		celcius = (5.0/9.0) * (fahr - 32.0);
		printf("%7.0f %12.1f\n", fahr, celcius);
		fahr = fahr + step;
	}
}
