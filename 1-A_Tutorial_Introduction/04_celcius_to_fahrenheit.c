// Exercise 1-4. Write a program to print the corresponding Celcius to Fahrenheit table.

#include<stdio.h>

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
