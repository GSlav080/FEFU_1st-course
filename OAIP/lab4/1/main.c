#include <stdio.h>

int main() {
    FILE *mufile;
    char a = 'A', A, B;
    mufile = fopen("C:\\Users\\GSV\\CLionProjects\\untitled\\OAAP\\lab4\\input1.txt", "r");
    scanf("%c %c", &A, &B);
    int flag = 0, s = 0;
    while (a != '\n') {
        fscanf(mufile, "%c", &a);
        if (a == A)
            flag = 1;
        if (a == B && flag == 1) {
            flag = 0;
            s++;
        }
    }
    printf("%d", s);
    return 0;
}
