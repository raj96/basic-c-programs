#include <stdio.h>

int main() {
	//Take 2 inputs
	int a, b;
	printf("Enter 2 numbers: ");
	scanf("%d %d", &a, &b);

	//Find out which 1 is larger
	if(a > b) {
		printf("%d is greater than %d\n", a, b);
	} else if(a < b) {
		printf("%d is greater than %d\n", b, a);
	} else {
		printf("%d and %d are equal\n", a, b);
	}
	// There are more logical operators apart from '<' and '>'
	// Which are as follows:
	// '<=': Less than or equal to
	// '>=': Greater than or equal to
	// '==': Exactly equal to
	// '&&': Logical AND
	// '||': Logical OR
	// '!' : Logical NOT

	return 0;
}
