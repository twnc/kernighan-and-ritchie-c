// Exercise 1-6. Verify that the expression getchar() != EOF is 0 or 1.

#include<stdio.h>

int main()
{
	int c;

	// The loop will print c so long as getchar() does not equal EOF. As
	// '!=' takes precedence over '=', c will always be assigned a 1 or 0.
	// As this is the condition of the loop, it will always print 1.
	while(c = getchar() != EOF)
		printf("%d", c);

	// This should always print a zero, as it will occur after the while
	// loop has failed. Initially I tried to use putchar(), but this failed
	// as 0 and 1 are not the ASCII encodings for the 0 or 1 character. The
	// program just printed empty spaces.
	printf("%d\n", c);
}
