#include <stdio.h>
// Требуется найти и вывести m начальных членов последовательности
// простых чисел. Задачу решить полным перебором всех возможных делителей.
int main() {
    int m;
    printf("INPUT m: ");
    scanf_s("%d", &m);
    int del = 0, count = 0;

    for (int i = 2; count<m; i++)
    {
        del = 0;
        for (int j = 2; j<(i/2)+1; ++j)
        {
            if ((i%j)==0)
            {
                del = 1;
                break;

            }
        }
        if (del == 0) {
            printf(" %d ", i);
            count++;
        }
    }
    return 0;
}
