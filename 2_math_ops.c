#include <stdio.h>

/*
	Apart from +, -, *, /, % (modulus)
	and
	binary operators like & (and), | (or), ^ (xor), ~ (not)
	there are operators like ++ and -- which are run below
	Some more operators:
	'<<': Left shift operator [int a = 2 << 1, this left shifts 2 by 1 bit and stores it in 'a']
	'>>': Right shift operator [int a = 2 >> 1, this right shifts 2 by 1 bit and stores it in 'a']
*/

int main() {
	int a = 5, b = 1, c = 3;

	printf("Pre-Increment\n");
	printf("++a: %d\n", ++a);
	printf("a: %d\n\n", a);

	printf("Post-Increment\n");
	printf("a++: %d\n", a++);
	printf("a: %d\n\n", a);

	printf("Pre-Decrement\n");
	printf("--a: %d\n", --a);
	printf("a: %d\n\n", a);

	printf("Post-Decrement\n");
	printf("a--: %d\n", a--);
	printf("a: %d\n\n", a);

	return 0;
}
