#include <stdio.h>

int main() {
    int h, a, b, summ=0,d=0;
    scanf("%d", &h);
    scanf("%d", &a);
    scanf("%d", &b);
    h -= b;
    a = a-b;
    while (summ<h)
    {
        d++;
        summ += a;
    }
    printf("%d", d);
    return 0;
}