#include <stdio.h>
#include <stdlib.h>

struct stack {
    int maxsize;
    int top;
    int *items;
};


struct stack *init(int maxsize) {
    struct stack *pt = (struct stack *) malloc(sizeof(struct stack));
    pt->maxsize = maxsize;
    pt->top = -1;
    pt->items = (int *) malloc(sizeof(int) * maxsize);
    if (pt!=0)
        return pt;
    else
        return NULL;
}

int get_size(struct stack *pt) {
    return pt->top + 1;
}

int isEmpty(struct stack *pt) {
    return pt->top == -1;
}

int isFull(struct stack *pt) {
    return pt->top == pt->maxsize - 1;
}

void add_head(struct stack *pt, int x) {

    if (isFull(pt)) {
        printf("init is FULL");
        exit(EXIT_FAILURE);
    }
    pt->items[++pt->top] = x;
}

int get_head(struct stack *pt) {
    if (!isEmpty(pt)) {
        return pt->items[pt->top];
    } else {
        printf("NOT ELEMENT");
        exit(EXIT_FAILURE);
    }
}

int del_head(struct stack *pt) {
    if (isEmpty(pt)) {
        printf("NOT ELEMENT");
        exit(EXIT_FAILURE);
    }
    return pt->items[pt->top--];
}

int main() {
    struct stack *pt = init(5);
    add_head(pt, 1);
    add_head(pt, 2);
    add_head(pt, 3);
    printf("The top element is %d\n", get_head(pt));
    printf("The stack get_size %d\n", get_size(pt));
    del_head(pt);
    del_head(pt);
    printf("element %d\n", get_head(pt));
    printf("get_size%d\n", get_size(pt));
    del_head(pt);
    printf("The top element is %d\n", get_head(pt));
    printf("The stack get_size is %d\n", get_size(pt));

    return 0;
}
