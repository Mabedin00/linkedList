#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"


int main(){
    printf("Creating empty list: ");
    struct node* linkedList = NULL;
    printf("[ ");
    print_list(linkedList);
    printf("Adding numbers 0-9 to list...\n");
    int i;
    for (i = 0; i < 10; i++){
        linkedList = insert_front(linkedList, i);
    }
    printf("[ ");
    print_list(linkedList);
    for (i = 0; i < 10; i++){
        printf("Removing %d\n", i );
        linkedList = remove_node(linkedList, i);
        printf("[ ");
        print_list(linkedList);
    }
    printf("Free list\n");
    linkedList = free_list(linkedList);
    printf("Back to empty list:\n" );
    printf("[ ");
    print_list(linkedList);



}
