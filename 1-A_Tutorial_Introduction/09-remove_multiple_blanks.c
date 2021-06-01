// Exercise 1-9. Write a program to copy its input to its output, replacing each
// string of one or more blanks by a single blank.

#include<stdio.h>

int main()
{
	int c;

	c = getchar();
	while (c != EOF) {
		putchar(c);
		// If c was a space, get characters until c is no longer a space
		if (c == ' ') {
			while (c == ' ')
				c = getchar();
		} else
			c = getchar();
	}
}
