// Exercise 1-13. Write a program to print a histogram of the lengths of words
// in its input. It is easy to draw the histogram with the bars horizontal; a
// vertical orientation is more challenging.

#include<stdio.h>

#define IN  1
#define OUT 0

int main()
{
	int c, state, word_length;
	int nwordlengths[20];

	state = word_length = 0;
	for (int i = 0; i < 20; ++i)
		nwordlengths[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (state == IN) {
				++nwordlengths[word_length];
				state = OUT;
				word_length = 0;
			}
		}
		else  {
			state = IN;
			++word_length;
		}
	}

	printf("Word length\tFrequency\n");
	printf("-----------\t---------\n");
	for (int i = 0; i < 20; ++i) {
		printf("%5d\t\t", i);
		for (int j = 0; j < nwordlengths[i]; ++j)
			printf("-");
		printf("\n");
	}
}
