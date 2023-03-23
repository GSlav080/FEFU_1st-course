#include <stdio.h>

int main() {
    char a;
    int A[10000] = {0}, B, num1, num2, i = 0, size1 = 0, OTV[10000] = {0};
    FILE *F;
    F = fopen("input.txt", "r");
    while (1) {
        fscanf(F, "%c", &a);

        if (a != '\n') {
            num1 = (int) a - '0';
            A[i] = num1;
            i++;
            size1++;
        } else {
            break;
        }
    }
    fscanf(F, "%d", &B);
    int ost = 0, j = 10000, size2 = 0;
    for (i = 0; i < size1; i++) {
        num1 = ost * 10 + A[i];
        num2 = num1 / B;
        j--;
        OTV[j] = num2;
        size2++;
        ost = num1 - B * num2;
    }
    F = fopen("output.txt", "w");
    int Flag = 1;
    for (i = 10000; i >= 10000 - size2; i--) {
        if (Flag && OTV[i] != 0)
            Flag = 0;
        if (!Flag)
            fprintf(F, "%d", OTV[i]);
    }
    fprintf(F, "\n");
    fprintf(F, "%d", ost);
    return 0;
}

