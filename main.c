#include "list.h"
#include "employee.h"

#include <stdio.h>
#include <string.h>

int main(void) {
    LinkedList list;
    //Employee dave = {.name = "Dave", .age = 44};
    //Employee sarah = {.name = "Sarah", .age = 34};
    //Employee jill = {.name = "Jill", .age = 32};
    //Employee *tmp;


    //displayEmployee(&dave);
    initilizeList(&list);
    char *data1 = "Hello";
    char *data2 = "World";
    char *data3 = "!";

    push(&list, data1);
    push(&list, data2);
    push(&list, data3);

    printList(&list, printf);

    char *searchData = "World";
    Node *node = getNode(&list, (COMPARE)strcmp, searchData);
    if (node != NULL) {
        printf("Found node with data: %s\n", (char*)node->data);
    } else {
        printf("Node not found\n");
    }

    node = pop(&list);
    printList(&list, printf);
    printf("\n%s\n",node->data);

    
    return 0;
}