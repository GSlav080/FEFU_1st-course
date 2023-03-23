#include <stdio.h>
#include <math.h>
int main() {
    FILE *input;

    char a = 'f';
    input = fopen("C:\\Users\\GSV\\CLionProjects\\untitled\\OAAP\\lab4\\9\\input.txt", "r");
    int num1 = 0, num2 = 0;
    while (!feof(input)) {
        fscanf(input, "%c", &a);
        if (a == ' ') {
            printf("%d ", num2);
            num1 = 0;
            num2 = 0;
            continue;
        }
        else if (a=='I')
        {
            num1 = 1;
        }
        else if (a=='V')
        {
            num1 = 5;
        }
        else if (a=='X')
        {
            num1 = 10;
        }
        else if (a=='L')
        {
            num1 = 50;
        }
        else if (a=='C')
        {
            num1 = 100;
        }
        else if (a=='D')
        {
            num1 = 500;
        }
        else if (a=='M')
        {
            num1 = 1000;
        }
        if(num1>num2)
        {
            num2 = abs(num2-num1);
        }
        else
            num2+= num1;


    }

    return 0;
}
