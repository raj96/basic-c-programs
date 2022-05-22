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

	return 0;
}
