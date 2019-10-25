#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

void print_list(struct node *start){
    if (start->next == NULL){
        printf("%d ]\n", start->number );
    }
    else{
        printf("%d ", start->number);
        print_list(start->next);
    }
}

struct node * insert_front(struct node *oldFirst, int val){
    calloc(sizeof(struct node), 1);
    struct node newNode;
    newNode.next = oldFirst;
    newNode.number = val;
}
