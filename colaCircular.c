//
// Created by Administrador on 18/6/2023.
//

#include "colaCircular.h"
#include <stdio.h>
#include <stdlib.h>

Node *newNode(int data) {
    Node * aux = NULL;
    aux = malloc(sizeof (Node));
    if(aux == NULL){
        printf("Error");
        exit(-1);
    }
    aux->data = data;
    aux->next = NULL;

    return aux;
}

CQueue *newQueue(int maxSize) {
    CQueue * aux = NULL;
    aux = malloc(sizeof (CQueue));
    if(aux == NULL){
        printf("Error");
        exit(-1);
    }
    aux->last = NULL;
    aux->first = NULL;
    aux->maxSize = maxSize;
    aux->actSize = 0;

    return aux;
}

void enqueue(CQueue *queue, Node *node) {
    if(queue->first == NULL){
        queue->first = node;
        queue->last = node;
        queue->actSize++;
    }else{
        Node * aux = queue->first;
        while (aux != NULL){
            aux=aux->next;
        }
        if(queue->actSize < queue->maxSize){
            queue->last->next = node;
            queue->last = node;
            queue->actSize++;
        }else{
            printf("No hay mas lugar\n");
        }
    }
}

void dequeue(CQueue *queue) {
    if(queue->first == NULL){
        printf("Empty list\n");
    }else{
        Node * aux = queue->first;
        queue->first = queue->first->next;
        free(aux);
        queue->actSize--;
    }
}

void print(CQueue *queue) {
    Node * aux = queue->first;
    while (aux != NULL){
        printf("%d -> ", aux->data);
        aux = aux->next;
    }
    printf("N\n");
}

