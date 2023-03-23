#include <stdio.h>
// Вычислить факториал введенного числа x <= 10. Число вводит пользователь.
int main() {
    int x;
    printf("Enter x:");
    scanf_s("%d", &x);
    if (x <= 10 && x>0){
        int Factorial = 1;
        for (int i = 1; i <= x; i++) {
            Factorial = Factorial * i;
        };
        printf("%d!=%d ", x, Factorial);
        return 0;
    }
    else
        printf("Error");
}
