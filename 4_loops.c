#include <stdio.h>

int main() {
	//Take an input
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	//For loop
	printf("Table for %d upto 10\n", n);
	for(int i = 1;i <= 10;i++) {
		printf("%d x %d\t=\t%d\n", n, i, n * i);
	}
	printf("\n");

	//While loop
	printf("First %d even numbers\n", n);
	int counter = 1;
	// The below loop will run 'while' the value of counter is less-than or equal to the value of n
	while(counter <= n) {
		printf("%d ", 2 * counter);
		counter = counter + 1;
	}
	printf("\n\n");

	//do-while loop
	printf("First %d odd numbers\n", n);
	counter = 0;
	// The only difference between 'while' and 'do-while' loops is that,
	// 'do-while' loop will atleast once, that is, the loop is guranteed to
	// run once, regardless of the truth-ness of the condition
	do {
		printf("%d ", 2 * counter + 1);
		counter += 1; 
	}while(counter < n);
	printf("\n");

	return 0;
}
