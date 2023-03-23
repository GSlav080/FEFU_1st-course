#include <stdio.h>

// Одномерные массивы
//1. Введите одномерный целочисленный массив. Найдите наибольший нечетный элемент и наименьший четный элемент.
//
//2. Найдите сумму отрицательных элементов массива.
//
//3. Найдите произведение элементов массива с нечетными номерами.
//
//4. Найдите сумму элементов массива между двумя первыми нулями. Если двух нулей нет в массиве, то выведите ноль.
//
//5. Найдите наибольший и наименьший элемент массива.
//
//6. Найдите минимальный по модулю элемент массива.
//
//7. Преобразовать массив так, чтобы сначала шли нулевые элементы, а затем все остальные.
int main() {
    int a[15] = {10, 20, 24, 12, 1, 3, -7, -700, 7004, 56, 34, 12, 3, 7, 8}, b = 15;

    printf("Task 1:\n");
    int min = 2147483647, max = -2147483648;
    for (int i = 0; i < b; i++) {
        if (a[i] > max && a[i] % 2 != 0)
            max = a[i];
        if (a[i] < min && a[i] % 2 == 0)
            min = a[i];

    }
    printf("Min: %d\n", min);
    printf("Max: %d\n\n", max);

    printf("Task 2:\n");
    int sum = 0;
    for (int i = 0; i < b; i++) {
        if (a[i] < 0)
            sum += a[i];


    }
    printf("Sum: %d\n\n", sum);


    printf("Task 3:\n");
    int pr = 1;
    for (int i = 1; i < b; i += 2) {

        pr *= a[i];


    }
    printf("Composition: %d\n\n", pr);

    printf("Task 4:\n");
    int nuls = 1, FLAG = 0;
    int a1[7] = {1, 0, 2, 2, 6, 0, 9}, b1 = 7;
    for (int i = 0; i < b1; i++) {
        if (a1[i] == 0) {
            FLAG++;
            continue;
        }
        if (FLAG == 2) {
            break;
        }
        if (FLAG == 1) {
            nuls *= a1[i];
        }

    }

    if (FLAG != 2)
        printf("0\n\n");
    else
        printf("%d\n\n", nuls);

    printf("Task 5:\n");
    min = 2147483647;
    max = -2147483648;
    for (int i = 0; i < b; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];

    }
    printf("Min: %d\n", min);
    printf("Max: %d\n\n", max);

    printf("Task 6:\n");
    int c = 0;
    min = 2147483647;
    max = -2147483648;
    for (int i = 0; i < b; i++) {
        c = a[i];
        if (c < 0) {
            c = c * (-1);
        }

        if (c < min)
            min = c;

    }
    printf("Min: %d\n\n", min);

    printf("Task 7:\n");
    int ret1, ret2, a2[b1], j = 0;
    FLAG = 0;
    for (int i = 0; i < b1; i++) {
        if (a1[i] == 0) {
            a2[j] = 0;
            j++;
        }
    }
    for (int i = 0; i < b1; i++) {
        if (a1[i] != 0) {
            a2[j] = a1[i];
            j++;
        }
    }
    for (int i = 0; i < b1; i++) {
        printf("%d ", a1[i]);
    }
    printf("\n");
    for (int i = 0; i < b1; i++) {
        printf("%d ", a2[i]);
    }
    return 0;
}
