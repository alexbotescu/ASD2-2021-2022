//
// Created by alex on 15.02.2022.
//

#ifndef ASD2_C1_NODE_H
#define ASD2_C1_NODE_H
#include <stdlib.h>

typedef struct node{
    int inf;
    struct node * next;
}node;

node * alloc(int k){
    node * p = (node*)malloc(sizeof(node));
    p->inf = k;
    p->next = NULL;
    return p;
}



void dealloc(node * p){
    if(p != NULL)
        free(p);
}

#endif //ASD2_C1_NODE_H
