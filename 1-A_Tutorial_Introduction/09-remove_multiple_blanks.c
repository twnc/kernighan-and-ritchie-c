// Exercise 1-9. Write a program to copy its input to its output, replacing each
// string of one or more blanks by a single blank.

#include<stdio.h>

// As we haven't learnt else yet, I used a boolean style int as we saw in 1-7
int main()
{
	int c, c_is_blank;

	c = getchar();
	while (c != EOF) {
		putchar(c);
		c_is_blank = (c == ' ');
		// If c was a space, get characters until c is no longer a space
		if (c_is_blank == 1) {
			while (c == ' ')
				c = getchar();
		}
		// If c wasn't a space, get a new character
		if (c_is_blank == 0)
			c = getchar();
	}
}
