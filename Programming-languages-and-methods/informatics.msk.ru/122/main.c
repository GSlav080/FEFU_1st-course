#include <stdio.h>

int main() {
    int n, m, mask1, mask2;

    scanf("%d %d", &n, &m);
    mask1 = 1 << n;
    mask2 = 1 << m;
    printf("%d", mask1|mask2);


    return 0;
}