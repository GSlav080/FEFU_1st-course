#include <stdio.h>
#include <math.h>

//Для заданных вещественных чисел (a, b, c)
// требуется найти корни квадратного уравнения
// a · x^2 + b · x + c = 0. При этом необходимо
// предусмотреть все возможные ситуации: (1) –
// существуют два корня, (2) – корень единственный,
// (3) – корней нет.
int main() {
    double a, b, c;
    printf("ax^2+bx+c=0 \n");
    printf(" Input a: ");
    scanf_s("%lf", &a);


    printf("Input b: ");
    scanf_s("%lf", &b);


    printf("Input c: ");
    scanf_s("%lf", &c);


    double D;
    D = pow(b, 2)-4*a*c;
    if (D>0) {
        printf("x1 = %lf\n", (-b+pow(D, 0.5))/2/a);
        printf("x2 = %lf\n", (-b-pow(D, 0.5))/(2*a));
    }
    else if (D==0) {
        printf("x = %lf\n", (-b+pow(D, 0.5))/2/a);

    }
    else
        printf("Not root");
    return 0;
}
