#include "list.h"
#include "employee.h"

int main(void) {
    LinkedList list;
    Employee dave, sarah;

    dave.name = "Dave";
    dave.age = 44;
    sarah.name = "Sarah";
    sarah.age = 34;

    displayEmployee(&dave);
    initilizeList(&list);

    push(&list, &dave);
    printList(&list, displayEmployee);

    push(&list, &sarah);
    printList(&list, displayEmployee);
    
    return 0;
}