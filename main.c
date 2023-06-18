#include <stdio.h>
#include "colaCircular.h"

int main() {
    int max;
    //printf("Ingrese capacidad maxima:\n");
    //scanf("%d", &max);
    CQueue * queue = newQueue(5);
    enqueue(queue, newNode(1));
    enqueue(queue, newNode(2));
    enqueue(queue, newNode(3));
    enqueue(queue, newNode(4));
    enqueue(queue, newNode(5));
    enqueue(queue, newNode(6));
    print(queue);
    dequeue(queue);
    print(queue);
    enqueue(queue, newNode(88));
    print(queue);
    return 0;
}
