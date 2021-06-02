// This is an example program from K&R
// Exercise 1-11. How would you test the word count program? What kinds of input
// are most likely to uncover bugs if there are any?
//
// ANSWER:
// I would try lots of different inputs, and ideally inputs that might not have
// been anticipated by the developer. Inputs such as text beginning with
// whitespace, repeated tabs and newlines, text with lots of numbers and
// punctuation, really long input, really short input. The goal would be to get
// as wide a variety as possible, with as much inclusion of types of text that
// might not have been considered during development.

#include<stdio.h>

#define IN 1	// inside a word
#define OUT 0	// outside a word

// count lines, words, and characters in input
int main()
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
}
