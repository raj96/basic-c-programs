#include <stdio.h>

/*
	Apart from +, -, *, /, % (modulus)
	and
	binary operators like & (and), | (or), ^ (xor), ~ (not)
	there are operators like ++ and -- which are run below
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
