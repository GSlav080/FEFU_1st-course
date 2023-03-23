#include <stdio.h>

//Требуется для заданных натуральных чисел (a, b) выполнить поиск их
// наибольшего общего делителя (НОД). Для решения задачи воспользоваться
// алгоритмом Евклида. Результат вывести в виде числа.
int main() {
    int a, b, FLAG = 0;
    printf("INPUT a: ");
    scanf_s("%d", &a);

    printf("INPUT b: ");
    scanf_s("%d", &b);

    while (FLAG == 0) {
        if (a != 0 && b != 0) {
            if (a > b) {
                a %= b;
            } else {
                b %= a;
            }

        } else {

            break;
        }
    }
    printf("Answer: %d", a + b);
    return 0;
}
