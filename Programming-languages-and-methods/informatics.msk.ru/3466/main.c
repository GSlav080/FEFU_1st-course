#include <stdio.h>

int main() {
    int a, b, l, N, ans;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &l);
    scanf("%d", &N);
    ans = a+(b+a)*(N-1)*2+l*2;
    printf("%d", ans);
    return 0;
}