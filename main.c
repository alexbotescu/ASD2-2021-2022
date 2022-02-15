#include <string.h>
#include <stdio.h>
#include "list.h"

int main() {
   /* car c;
    c.power = 121;
    printf("power:%d\n",c.power);
    struct person p; //pt ca la structura person nu am folosit alias cu typedef
    strcpy(p.name,"anamaria");
    printf("name of the person:%s\n",p.name);*/
    list l;
    initializare(&l);
    add_fata(&l,1);
    add_spate(&l,2);
    for(int i=0;i<15;i++){
        add_fata(&l,i);
    }
    for(int i=20;i>=15;i--){
        add_spate(&l,i);
    }
    traverse(l);
    return 0;
}
