//
// Created by alex on 04.03.2022.
//
#include "snode.h"
snode * create(int x){
    snode * p = (snode*)malloc(sizeof(snode));
    p->inf = x;
    p->prev = NULL;
    p->next = NULL;
    return p;
}

void dl_dealloc(snode *p){
    if(p != NULL)
        free(p);
}
