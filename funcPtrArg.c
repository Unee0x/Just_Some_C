#include <stdio.h>
#include <stdbool.h>

// Function Pointter

int (*function)();

// Function

int square(int x){ printf("The square of %d is %d\n", x, x * x); return x * x; } 

int main(){

	// Pointing the pointer variable to the address of a function
	
	function = square;

	// Function pointer behaves just like original function
	function(7);

	return 0;
}