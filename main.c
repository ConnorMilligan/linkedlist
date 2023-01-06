#include "list.h"
#include "employee.h"

#include <stdio.h>
#include <string.h>

int main(void) {
    LinkedList list;
    Employee data1 = {.name = "Dave", .age = 44};
    Employee data2 = {.name = "Sarah", .age = 34};
    Employee data3 = {.name = "Jill", .age = 32};
    Employee *tmp;


    //displayEmployee(&dave);
    initilizeList(&list);

    push(&list, &data1);
    push(&list, &data2);
    push(&list, &data3);

    printList(&list, displayEmployee);

    tmp = &data2;
    Node *node = getNode(&list, (COMPARE)compareEmployee, tmp);
    if (node != NULL) {
        printf("Found node with data: %s\n", ((Employee*)node->data)->name);
    } else {
        printf("Node not found\n");
    }

    delete(&list, node);
    pop(&list);
    printList(&list, displayEmployee);


    
    return 0;
}