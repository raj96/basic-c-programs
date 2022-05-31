#include <stdio.h>
#include <math.h>

// Declaration and definition of a function
// 'n' is called the argument to a function, there may be more than 1 argument
// to a function, if needed, but in the below function there is just 1, 'int n'
// The 'int' written before the function name (that is, 'factorial') is known
// as the return-type of the function. This denotes that the function will return
// a value of type integer, which may be consumed by the caller of this function
int factorial(int n) {
	if(n < 2) {
		return 1;
	}
	return n * factorial(n - 1);
}
// Declation of a function, without the definition
// It's mandatory to declare all the functions before main() is defined
// The 'void' denotes that this function will not return any value
void isPrime(int);

int main() {
	printf("Enter a number: ");
	int n;
	scanf("%d", &n);
	printf("%d! = %d\n", n, factorial(n));

	isPrime(n);

	return 0;
}

// The definition of the function 'isPrime'
void isPrime(int n) {
	int s = sqrt(n);
	int i;
	for(i = 2; i <= s; i++) {
		if(n % i == 0) {
			break;
		}
	}
	if(i == s + 1) {
		printf("%d is a prime number\n", n);
	} else {
		printf("%d is not a prime number\n", n);
	}
}
