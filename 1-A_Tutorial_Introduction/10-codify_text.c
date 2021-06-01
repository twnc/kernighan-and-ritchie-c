// Exercise 1-10. Write a program to copy its input to its output, replacing
// each tab by \t, each backspace by \b, and each backslash by \\. This makes
// tabs and backspaces visible in an unambiguous way.

#define TAB '\t'
#define BACKSPACE '\b'
#define BACKSLASH '\\'

#include<stdio.h>

int main()
{
	int c, special_characters;

	while ((c = getchar()) != EOF) {
		special_characters = 0;
		if (c == TAB) {
			++special_characters;
			putchar(BACKSLASH);
			putchar('t');
		}
		if (c == BACKSPACE) {
			++special_characters;
			putchar(BACKSLASH);
			putchar('b');
		}
		if (c == BACKSLASH) {
			++special_characters;
			putchar(BACKSLASH);
			putchar(BACKSLASH);
		}
		if (special_characters == 0)
			putchar(c);
	}
}
