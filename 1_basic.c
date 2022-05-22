// This is a comment and it does not affect your code

/*
 This is a multi-line comment
 Comments are used to explain a piece of code
 in simple english.
*/

// We include stdio.h because printf and scanf are declared inside it
#include <stdio.h>


// main() is a function, and is always the entry point for any program in C
int main() {
	// Print to the screen
	printf("Hello World!\n");

	// Take input
	// Declaring a variable 'a' of type integer
	int a;
	printf("Enter a number: ");
	// Taking input from the user and storing it in the variable 'a'
	scanf("%d", &a);
	// %d is the format specifier for integer type
	printf("You entered %d\n", a);

	// Add to numbers and display on screen
	// Declaring and defining the value of variable 'b' in a single line
	int b = 5;
	// Declaring and defining the value of variable 'result' 
	// in a single line, by adding 'a' and 'b'
	int result = a + b;
	// Printing the result, note how each %d will be replaced with the value of 'a', 'b' and 'result'
	printf("%d + %d = %d\n", a, b, result);

	return 0;
}
