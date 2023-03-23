#include <stdio.h>
#include <math.h>

// Пусть имеются следующие вещественные числа a1, b1, c1, a2 и b2.
// Требуется определить пересекает ли парабола, заданная уравнением
// y = a1 · x^2 + b1 · x + c1, прямую y = a2 · x + b2. Результат вывести
// в виде строки: ’YES’ или ’NO’.
int main() {
    double b1, c1, a2, b2, a, b, c;
    printf("y = a1 *  x^2 + b1 * x + c1 = a2 * x + b2\n");
    printf("a1: "); scanf_s("%lf", &a);
    printf("b1: "); scanf_s("%lf", &b1);
    printf("c1: "); scanf_s("%lf", &c1);
    printf("a2: "); scanf_s("%lf", &a2);
    printf("b2: "); scanf_s("%lf", &b2);
    b = b1-a2;
    c = c1-b2;
    double D;
    D = pow(b, 2)-4*a*c;
    if (D>=0)
        printf("YES");

    else
        printf("NO");
    return 0;
}
