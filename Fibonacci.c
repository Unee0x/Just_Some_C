#include <stdio.h>

// A simple Fibonacci number finding function

size_t F(size_t n){
	
	if(n == 0) return 0;
	else if(n == 1) return 1;
	else
		return F(n - 1) + F(n - 2);
}

int main(){

	size_t x = F(10);

	printf("%ld\n", x);

	return 0;
}