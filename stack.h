//
// Created by alex on 04.03.2022.
//

#ifndef STACKS_STACK_H
#define STACKS_STACK_H
#include "snode.h"
#include "snode.c"
typedef struct stack{
    snode * up, * down;
    int level;
    int capacity;
}stack;
#endif //STACKS_STACK_H
