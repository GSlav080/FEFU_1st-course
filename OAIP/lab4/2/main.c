#include <stdio.h>

int main() {
    FILE *mufile;
    char a = 'A', A = '1';
    mufile = fopen("C:\\Users\\GSV\\CLionProjects\\untitled\\OAAP\\lab4\\input1.txt", "r");
    int flag = 0, s = 0, max = 0;
    while (a != '\n') {
        fscanf(mufile, "%c", &a);
        if (a == A)
            s++;
        else {
            A = a;
            if (s > max)
                max = s;
            s = 0;
        }
    }
    printf("%d", max);
    return 0;
}
