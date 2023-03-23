#include <stdio.h>

int main() {
    int a, b;
    FILE *myfile;

    myfile = fopen("input.txt", "r");

    fscanf(myfile, "%d", &a);
    fscanf(myfile, "%d", &b);

    for (int i = 2; i < ((a < b) ? a : b); i++) {
        while (a % i == 0 && b % i == 0) {
            a /= i;
            b /= i;
        }
    }
    int s1 = 0, s2 = 0;
    while (b % 2 == 0 || b % 5 == 0) {
        if (b % 2 == 0) {
            s1++;
            b /= 2;
        }
        if (b % 5 == 0) {
            s2++;
            b /= 5;

        }
    }
    myfile = fopen("output.txt", "w");
    fprintf(myfile, "%d %d", b, ((s1 < s2) ? s2 : s1));
    return 0;
}