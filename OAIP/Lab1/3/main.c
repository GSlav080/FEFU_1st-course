//Найти алгебраическую сумму для выражения:.N и степень k вводит пользователь.

#include <stdio.h>
#include <math.h>
int main() {
    printf("Enter N, k: \n");
    int N;
    float k;
    scanf_s("%d", &N);
    scanf_s("%f", &k);
    double count = 0, y;
    if (N>=1){
        for (int i=1; i<=N; ++i)
        {   y=pow(i, k);

            count += y;
        }
        printf("%f", count);
    }
    return 0;
}
