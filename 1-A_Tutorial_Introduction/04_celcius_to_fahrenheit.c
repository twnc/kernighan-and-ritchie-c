// Exercise 1-4. Write a program to print the corresponding Celcius to Fahrenheit table.

#include<stdio.h>

main()
{
	float fahr, celcius;
	int lower, upper, step;

	lower = 0; // lower limit of temperature table
	upper = 300; // upper limit
	step = 20; // step size

	celcius = lower;
	printf(" Celcius |  Fahrenheit\n");
	printf("------------------------\n");
	while (celcius <= upper) {
		fahr = (celcius / (5.0/9.0)) + 32;
		printf("%5.0f %14.1f\n", celcius, fahr);
		celcius = celcius + step;
	}
}
