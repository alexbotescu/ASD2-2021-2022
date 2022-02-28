//
// Created by alex on 26.02.2022.
//

#include <printf.h>
#include "doubly_linked_list.h"


void init(dllist *l){
    l->head = NULL;
    l->tail = NULL;
}
void add_fata(dllist * l, int x){
    dlnode * nod = create(x);
    if(l->head == NULL){
        l->head = nod;
        return;
    }
    if(l->tail == NULL){
        l->tail = l->head;
        nod->next = l->tail;
        l->tail->prev = nod;
        l->head = nod;
        return;
    }
    nod -> next = l->head;
    l->head -> prev = nod;
    l->head = nod;
}
void add_spate(dllist * l, int x){
    dlnode * nod = create(x);
    if(l->head == NULL){
        l->head = nod;
        return;
    }
    if(l->tail == NULL){
        l->tail = nod;
        l->head->next = l->tail;
        l->tail->prev = l->head;
        return;
    }
    nod->prev = l->tail;
    l->tail->next = nod;
    l->tail = nod;
}

void add_between(dllist * l, dlnode * p, dlnode * q, int x){
    if(p->next != q) return;
    dlnode * nod = create(x);
    p->next = nod;
    nod->next = q;
    q->prev = nod;
    nod->prev = p;
}
void sterge(dllist *l, dlnode * q){
    if(q == l->head){
        l->head = l->head -> next;
        free(q);
        return;
    }
    if(q == l->tail){
        dlnode * tmp = l-> tail -> prev;
        tmp -> next = NULL;
        l-> tail = tmp;
        return;
    }
    dlnode * tmpp = q->prev;
    dlnode * tmpn = q->next;
    tmpp -> next = tmpn;
    tmpn -> prev = tmpp;
    q -> next = NULL;
    q -> prev = NULL;
    free(q);
}
void print(const dllist * l){
    dlnode * tmp = l->head;
    printf("[");
    while(tmp != NULL){
        printf("%d,",tmp->inf);
        tmp = tmp->next;
    }
    printf("\b]\n");
}
bool search(dllist l, int x){
    dlnode * p =  l.head;
    while(p != NULL && p->inf != x) p = p->next;
    return (p == NULL) ? false : true;
}

