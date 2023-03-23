#include <stdio.h>

int main() {
    int a, b, sh=0, nod, ost = 1;

    scanf("%d %d", &a, &b);
    while (ost != 0)
    {
        if (a>b)
        {
            a %= b;
            nod = b;
            ost = a%b;
        }
        else
        {
            b %= a;
            nod = a;
            ost = b%a;
        }
        sh++;
    }
    printf("%d %d", nod, sh);


    return 0;
}