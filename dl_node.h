//
// Created by alex on 26.02.2022.
//

#ifndef ASD2_C1_DL_NODE_H
#define ASD2_C1_DL_NODE_H

#include <stdlib.h>
#include <stdbool.h>

typedef struct dlnode{
    int inf;
    struct dlnode * prev, * next;
}dlnode;




dlnode * create(int x){
    dlnode * p = (dlnode*)malloc(sizeof(dlnode));
    p->inf = x;
    p->prev = NULL;
    p->next = NULL;
    return p;
}

void dl_dealloc(dlnode *p){
    if(p != NULL)
        free(p);
}

#endif //ASD2_C1_DL_NODE_H
