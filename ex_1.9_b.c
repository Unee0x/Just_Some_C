#include <stdio.h>

int main(int argc, char* argv[]){

int c;

/* Ask for input*/
printf("Please enter your input\n");

/* Scan all input til EOF is reached */

  while((c=getchar()) != EOF){

/* If blank is encounterd, scan for more blanks and put blank right before a non-blank */

    while(c == ' '){
      if((c=getchar()) != ' '){
	putchar(' ');
	  }
        }

/* Output all non-blank characters */

    putchar(c);
      }
/* newline for clarity */

    putchar('\n');

return 0;

}