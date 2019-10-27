#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

void print_list(struct node *start){
    if (start == NULL){
        printf("]\n");
    }
    else{
        printf("%d ", start->number);
        print_list(start->next);
    }
}

struct node * insert_front(struct node* oldFirst, int val){
    struct node* newNode = calloc(sizeof(struct node), 1);
    newNode->next=oldFirst;
    newNode->number = val;
    return newNode;
}

struct node * free_list(struct node * start){
    if (start == NULL){
        return NULL;
    }
    else{
        free_list(start->next);
        free(start);
    }
}

struct node * remove_node(struct node *front, int data){
    if (front->number == data){
        struct node * output = front->next;
        free(front);
        return output;
    }

    struct node * tempNode = front;
    for ( ; tempNode->next != NULL; tempNode = tempNode->next) {
        if (tempNode->next->number == data) {
            struct node * freeNode = tempNode->next;
            tempNode->next = tempNode->next->next;
            free(freeNode);
            return front;
        }
    }
    return front;

}
