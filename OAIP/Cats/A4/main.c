#include <stdio.h>
#include <math.h>
int main() {
    int a=0, b, c;
    FILE * myfile;
    myfile = fopen("input.txt", "r");
    fscanf(myfile, "%d" ,&c);
    int size = 0, c1 =c;
    while (c1>0)
    {
        c1 /= 10;
        size++;
    }
    int C[size];
    int i = size-1;
    while(c)
    {


        C[i] = c % 10;
        c /= 10;
        i--;
    }

    int j;
    int tmp;
    for (i = 1; i < size; i++) {
        for (j = 1; j <= size-i; j++) {
            if (C[j] > C[j-1]) {
                tmp = C[j];
                C[j] = C[j-1];
                C[j-1] = tmp;
            }
        }
    }
    for (i = 0; i<size-1; i++)
    {
        a += C[i]* pow(10, size-i-2);
    }
    b = C[size-1];
    myfile = fopen("output.txt", "w");
    fprintf(myfile, "%d %d", a, b);

    fclose(myfile);
    return 0;
}
