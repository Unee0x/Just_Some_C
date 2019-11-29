#include "List.h"
#include <stddef.h>
#include <stdlib.h>
#include <time.h>

int main(){

        list_t l = List();
	int r[] = {[0 ... 99] = 0};
        for(int i = 0; i < 100;i++){
          srand(time(NULL));
	    r[i] =  rand()%9+0;
            append(l,&r);

        }



	print_list(l);
	delete_list(l);

	EXIT_SUCCESS;
}
