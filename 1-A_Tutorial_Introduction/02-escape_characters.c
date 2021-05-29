// Experiment to find out what happens when printf's argument string contains \c,
// where c is some character not listed above.
#include<stdio.h>

main()
{
	printf("hello, world\n");
	printf("\a"); // Creates alert sound
	printf("\z"); // Compiler warning "Unknown escape sequence". Prints a 'z'.
}
