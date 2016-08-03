#include <stdio.h>
#include <stdlib.h>


void **make_grid(size_t rows, size_t columns){
	void **dvp = NULL;

	dvp = calloc(rows,sizeof(void *));
	printf("--->>> Space allocated at address %p\n", dvp);


	for(int i=0;i < rows;i++){
		dvp[i] = calloc(columns, sizeof(void));
		printf("Space allocated at address %p <<<----\n", dvp[i]);
	}
	return dvp;
}

void free_grid(void **grid,size_t rows){
	
		for (int i = 0; i < rows; ++i)
		{
			printf("Freeing address %p\n", *(grid+i));
			free(*(grid+i));
		}

		printf("Freeing address %p\n", grid);
		free(grid);

}


int main(int argc, char const *argv[])
{
	/* code */
	size_t rows = 10, columns = 50;

	void **grid = make_grid(rows,columns);


	free_grid(grid,rows);


	return 0;
}