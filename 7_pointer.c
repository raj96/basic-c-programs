#include <stdio.h>

// Pointers are basically addresses to the variables
// Pointer variables for any data type may be declared
// by appending a '*' to the data type. Example:
// int* p;
// Here we have declared a variable 'p' that'll hold addresses
// to other integer variables. Please note, it'll NOT hold integer
// value just because it says int at the beginning. int and int* are
// separate data types.

// As you can see below the add function accepts 3 args
// First 2 are integer values and the third 1 is a pointer to integer
// (denoted by int*)
// Pointers are basically references to the variable.
// We can dereference it by using a '*' in front of the variable
// Here c is and address to some variable, but *c gives access to
// the value of the variable
// The below add function does not return the added value as expected
// rather it stores the value of the addition directly at the address
// of the variable passed as 'c'
void add(int a, int b, int* c) {
	*c = a + b;
}

int main() {
	int a, b, c;
	printf("Enter 2 numbers: ");
	scanf("%d %d", &a, &b);
	// Address of any variable can be known using a '&' before the variable
	// below we pass the address of variable 'c' as the 3rd parameter to
	// the function add, that is defined above
	add(a,b,&c);
	printf("%d + %d = %d\n", a, b, c);

	return 0;
}
