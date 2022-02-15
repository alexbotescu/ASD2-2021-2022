//
// Created by alex on 15.02.2022.
//

#ifndef ASD2_C1_LIST_H
#define ASD2_C1_LIST_H
#include "node.h"
#include <stdio.h>
typedef struct list{
    node * head, * tail;
}list;


void initializare(list *l){
    l->head = NULL;
    l->tail = NULL;
}
void add_fata(list * l, int k){
    node * p = alloc(k); /* creez nodul cu functia */
    /* cazul 1: lista vida */
    /* adica head, tail nu pointeaza catre nimeni */
    if(l->head == NULL && l->tail == NULL){
        /* p este primul nod al listei, deci head va indica catre el */
        l->head = p;
        return;
    }
    if(l->tail == NULL) /*head-ul e not null, tail-ul e null (nu m-am atins de ea in cazul precedent) */
    {
        l->tail = l->head;
        p->next = l->tail;
        l->head = p;
        return;
    }
    /* ultimul caz, in care lista are >=2 elemente */
    p->next = l->head;
    l->head = p;
}

void add_spate(list * l, int k){
    node * p = alloc(k);
    if(l->head == NULL && l->tail == NULL){
        l->head = p;
        return;
    }
    if(l->tail == NULL)
    {
        l->head->next=p;
        l->tail=p;
        return;
    }
    l->tail->next = p;
    l->tail = p;
}


void traverse(list l){
    node * tmp = l.head;
    printf("[");
    while(tmp != NULL){
        printf("%d,",tmp->inf);
        tmp = tmp->next;
    }
    printf("\b]\n");
}

#endif //ASD2_C1_LIST_H
