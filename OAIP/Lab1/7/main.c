#include <stdio.h>
// Для двух целочисленных переменных (a, n) требуется возвести число a в n-ю степень.
// Задачу решить, используя оператор цикла. В случае, если результат не умещается в переменную
// заданной разрядности — вывести сообщение о переполнении.


int main() {
    int a,ans, n;
    printf("a^n\nA: ");
    scanf_s("%d", &a);

    printf("N: ");
    scanf_s("%d", &n);
    ans = a;
    int Flag = 0;
    for (int i = 1; i<n; ++i)
        {
            if ((ans*a)<a)
            {printf("memory full");
                Flag = 1;
                break;
            }
            else
                ans = ans* a;
        }
    if (n==0)
        ans = 1;
    if (Flag==0)
        printf("Answer: %d", ans);
    return 0;
}
