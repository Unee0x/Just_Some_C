#include "List.h"
#include <stdlib.h>
#include <stdio.h>
//#include <stdarg.h>
//#include <stdbool.h>
#include <assert.h>
#include <time.h>
#include <math.h>
#include <unistd.h>



struct node{
	void *data;
	size_t pos;
	node_t next;
};

struct list{
	node_t head;	
};

size_t len(list_t l){
  size_t i = 0;
  for(i = 0; l->head != NULL;++i, l->head = l->head->next);
  return i;
}

list_t List(){
	list_t l = NULL;
	l = calloc(1,sizeof(struct list));
	l->head = NULL;
	assert(l != NULL);
	return l;
}


node_t newNode(void *data){
    static size_t p = 0;
	node_t n = calloc(1, sizeof(struct node));
	n->data = data;
	n->next = NULL;
	n->pos = p;
	assert(NULL != n);
	++p;
	return n;
}

void append(list_t l, void *data){
        //size_t i = 0;
	node_t head = NULL;
	head = l->head;

	if(NULL == l->head){
		l->head = newNode(data);
	}else{
		while((head)->next != NULL){
			head = (head)->next;
		}
		(head)->next = newNode(data);		
	}		
}

long get_rand(int min, int max){
    srandom(time(NULL));
    return random()%max+min;
}

void print_list(list_t l){

	node_t n = NULL;
	n = l->head;
	
	while(NULL != (n)){
	  printf("At node %zu it's a %d\n", n->pos,*((int*)n->data));                     
      n = (n)->next;
	}

}

void delete_list(list_t l){

		node_t n = NULL;
		n = l->head;

		while(NULL != n){	
		   printf("Freeing --->  %p\n", n);
		   free(n);
		   n = (n)->next;

              }
              free(l);
	}

// TODO: make insert and find functions

int main(){
	
	list_t l = List();
        int r[] = {[0 ... 99] = 0};
        for(int i = 0; i < 100;i++){
            r[i] =  get_rand(0, 9);
            append(l,&r);

	}


	
	print_list(l);
	delete_list(l);
	
	EXIT_SUCCESS;
}
