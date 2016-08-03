#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// This function will remove extra spaces any extra spaces from a string.

char *rm_extra_spaces(char *s){
	static char S[] = {'\0'};
		for(int i = 0,j = 0; i < strlen(s);i++){
		
			while(*(s+i) == ' ' && *(s+i+1) == ' '){
					i++;
				}

			S[j] = *(s+i);
			j++;		
	}
	return S;
}

int main(int argc, char const *argv[])
{
	char *arg = "Today                              is                       Monday!";
	char *s = rm_extra_spaces(arg);

	printf("%s\n", s);

	return 0;
}
