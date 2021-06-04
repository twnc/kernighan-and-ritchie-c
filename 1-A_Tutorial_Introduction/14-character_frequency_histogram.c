// Exercise 1-14. Write a program to print a histogram of the frequencies of
// different characters in its input.

#include<stdio.h>

int main()
{
	int c;
	int character_frequency[26];

	// Initialise character frequency array elements to zero
	for (int i = 0; i < 26; ++i)
		character_frequency[i] = 0;

	// Process input
	while ((c = getchar()) != EOF) {
		if (c >= 'A' && c <= 'Z')
			++character_frequency[c - 'A'];
		else if (c >= 'a' && c <= 'z')
			++character_frequency[c - 'a'];
	}

	// Print results
	printf("Letter | Frequency\n");
	printf("------------------\n");
	for (int i = 0; i < 26; ++i) {
		printf("%3c      ", i + 'A');
		for (int j = 0; j < character_frequency[i]; ++j)
			printf("-");
		printf("\n");
	}
}
