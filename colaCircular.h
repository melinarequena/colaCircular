//
// Created by Administrador on 18/6/2023.
//

#ifndef COLACIRCULAR_COLACIRCULAR_H
#define COLACIRCULAR_COLACIRCULAR_H

typedef struct node{
    int data;
    struct node * next;
}Node;

typedef struct cQueue{
    Node * first;
    Node * last;
    int maxSize;
    int actSize;
}CQueue;

Node * newNode(int data);
CQueue * newQueue(int maxSize);

void enqueue(CQueue * queue, Node * node);
void print(CQueue * queue);
void dequeue(CQueue * queue);


#endif //COLACIRCULAR_COLACIRCULAR_H
