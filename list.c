#include "list.h"

#include <stdlib.h>
#include <stdio.h>
#include <memory.h>

void initilizeList(LinkedList *list) {
    list->head = NULL;
    list->current = NULL;
    list->tail = NULL;
}

void push(LinkedList *list, void *data) {
    Node *node = malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;

    if (list->tail == NULL) {
        list->head = list->tail = node;
    } else {
        list->tail->next = node;
        list->tail = node;
    }
}

void delete(LinkedList *list, Node *node);
Node* pop(LinkedList *list);
Node* getNode(LinkedList *list, COMPARE compare, void *data);

void printList(LinkedList *list, DISPLAY display) {
    printf("Linked List\n");
    Node *current = list->head;
    while (current != NULL) {
        display(current->data);
        current = current->next;
    }
}