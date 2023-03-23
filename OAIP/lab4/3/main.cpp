#include <stdio.h>

int main() {
    FILE *mufile;
    char a = 'A', A[28], B[28];
    mufile = fopen(R"(C:\Users\GSV\CLionProjects\untitled\OAAP\lab4\input2.txt)", "r");
    int flag = 0, s = 0, i = 0;
    while (a != '\n') {
        fscanf(mufile, "%c", &a);
        A[i] = a;
        i++;
    }
    i = 0;
    a = '1';
    while (a != '\n') {
        fscanf(mufile, "%c", &a);
        B[i] = a;
        i++;
    }
    i = 0;
    a = '1';

    while (a != '\n') {
        fscanf(mufile, "%c", &a);
        for (int j = 0; i < 28; j++) {
            if (a == A[j]) {
                printf("%c", B[j]);
                break;
            }
        }
        i++;
    }
    return 0;
}
