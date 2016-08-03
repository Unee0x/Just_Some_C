#include <stdio.h>
#include <stdlib.h>

int add(int a, int b){ 
	printf("Added %d and %d to get %d\n",a,b, a + b);
	return a + b;
	 }
int subtract(int a, int b){ 
	printf("Subtracted %d and %d to get %d\n",a,b, a - b); 
	return a - b;
	 }
int multiply(int a, int b){ 
	printf("Multiplied %d and %d to get %d\n",a,b, a * b); 
	return a * b; 
}

int main(){

	int (*fp[])(int a, int b) = { add, subtract, multiply};
	fp[0](5,7);
	fp[1](3,4);
	fp[2](8,3);

	return 0;
}