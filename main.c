#include <string.h>
#include <stdio.h>
//#include "list.h"
//#include "doubly_linked_list.h"
#include "doubly_linked_list.c"
int main() {
   /* car c;
    c.power = 121;
    printf("power:%d\n",c.power);
    struct person p; //pt ca la structura person nu am folosit alias cu typedef
    strcpy(p.name,"anamaria");
    printf("name of the person:%s\n",p.name);
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
    stergere_v1(&l,l.tail);
    traverse(l);
    stergere_v1(&l,l.head);
    traverse(l);
    stergere_v2(&l,l.tail);
    traverse(l);
    stergere_v2(&l,l.head);
    traverse(l); */

    dllist l;
    init(&l);
    add_fata(&l,1);
    add_fata(&l,2);
    add_spate(&l,3);
    print(&l);
    sterge(&l,l.head->next);
    print(&l);
    printf("%d\n",search(l,3));
    printf("%d\n",search(l,7));
    add_between(&l, l.head, l.tail, 15);
    print(&l);
    return 0;
}
