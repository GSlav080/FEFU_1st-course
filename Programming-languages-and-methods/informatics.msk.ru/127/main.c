#include <stdio.h>

int main() {
    int A, i;

    scanf("%d %d", &A, &i);

    printf("%d",(A & (((1 << i) - 1))));
    return 0;
}