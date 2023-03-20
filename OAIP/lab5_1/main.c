#include <stdio.h>
#include <stdlib.h>

struct queue {
    int data;
    struct queue *next;
} *rear = NULL, *front = NULL;

struct queue *init(int item) {
    struct queue *node = (struct queue *) malloc(sizeof(struct queue));
    if (node != NULL) {
        node->data = item;
        node->next = NULL;
        return node;
    } else {
        printf("\nqueue the full");
        exit(EXIT_FAILURE);
    }
}

int del_head() {
    if (front == NULL) {
        printf("\nqueue the full");
        exit(EXIT_FAILURE);
    }

    struct queue *temp = front;
    front = front->next;

    if (front == NULL) {
        rear = NULL;
    }
    int item = temp->data;
    free(temp);
    return item;
}

void add_tail(int item) {
    struct queue *node = init(item);
    printf("add %d\n", item);

    if (front == NULL) {
        front = node;
        rear = node;
    } else {
        rear->next = node;
        rear = node;
    }
}

int get_tail() {
    if (front != NULL) {
        return front->data;
    } else {
        exit(EXIT_FAILURE);
    }
}

int isEmpty() {
    if (rear == NULL && front == NULL) {
        printf("the queue is empty");
    } else {
        printf("the queue is not empty");
    }
    return 0;
}

int main() {
    add_tail(124);
    add_tail(243);
    add_tail(324);
    add_tail(423);

    printf("%d\n", get_tail());

    del_head();
    del_head();
    del_head();
    del_head();

    isEmpty();
    return 0;
}
