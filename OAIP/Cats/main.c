#include <stdio.h>

int main() {
    int a, b, count= 0;
    scanf("%d", &a);
    b = a;
    do{
        a -= 100;
        if (a<0)
            a*= (-1);
        count++;
        printf("%d\n", a);


    }while(a in b);
    printf("%d", count);

    return 0;
}
