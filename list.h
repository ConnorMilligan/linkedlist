#ifndef LIST_H
#define LIST_H

typedef void(*DISPLAY)(void*);
typedef int(*COMPARE)(void*, void*);

typedef struct _node {
    void  *data;
    struct _node *next;
} Node;

typedef struct {
    Node *head;
    Node *tail;
    Node *current;
} LinkedList;

void initilizeList(LinkedList *list);
void push(LinkedList *list, void *data);
void delete(LinkedList *list, Node *node);
Node* pop(LinkedList *list);
Node* getNode(LinkedList *list, COMPARE compare, void *data);
void printList(LinkedList *list, DISPLAY display);


#endif