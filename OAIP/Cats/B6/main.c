#include <stdio.h>

int main() {
    int a, q;
    int i = 1;
    int size = 0;
    FILE * myfile;
    myfile = fopen("input.txt", "r");
    fscanf(myfile, "%d", &a);

    int a1 = a;
    while (a1 > 0) {
        a1 /= 2;
        size++;
    }
    int NUM[size];
    i = 0;
    while (a > 0) {
        NUM[i] = a % 2;
        a /= 2;
        i++;
    }

    fscanf(myfile, "%d", &a);
    myfile = fopen("output.txt", "w");
    if(a>=size)
        fprintf(myfile, "%d", 0);
    else
        fprintf(myfile, "%d", NUM[a]);
    return 0;
}
