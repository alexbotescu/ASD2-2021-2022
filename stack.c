//
// Created by alex on 04.03.2022.
//
#include <printf.h>
#include <limits.h>
#include "stack.h"

stack createStack(int capacity){
    stack s;
    s.up = NULL;
    s.down = NULL;
    s.level = 0;
    s.capacity = capacity;
    return s;
}

void push(stack * s, int k){
    if(s->level > s->capacity){
        printf("Error! Limit exceeded\n");
    }
    snode * node = create(k);
    s->level ++; /* we add a new node */
    if(s->down == NULL){
        /* base node does not exist */
        s->down = node;
        return;
    }
    if(s->up == NULL){
        /* base node does exist, but top node does not */
        s->up = node;
        s->down->next = s->up;
        s->up->prev = s->down;
        return;
    }
    s->up->next = node;
    node->prev = s->up;
    s->up = node;
}

int pop(stack * s){
    int aux = s->up->inf;
    snode * tmp = s->up;
    s->up = s->up->prev;
    s->level --;
    dl_dealloc(tmp);
    return aux;
}

int top(stack * s){
    if(s->up != NULL){
        return s->up->inf;
    }
    return PA_INT;
}


void traverse(stack s){
    snode * tmp = s.up;
    int curr_val;
    while(tmp -> prev != NULL){
        curr_val = pop(&s);
        printf("%d\n",curr_val);
    }
}
