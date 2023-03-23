#include <stdio.h>

int main() {
    int s=109, u,t;
    scanf("%d", &u);
    scanf("%d", &t);
    if (u>0)
        printf("%d", (u*t)%s);
    else if(u<0)
        printf("%d", ((s+u)*t)%s);
    else
        printf("%d", 0);
    return 0;
}