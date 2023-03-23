#include <stdio.h>

int main() {
    FILE *F;
    FILE *F2;
    F = fopen("input.txt", "r");
    F2 = fopen("output.txt", "w");
    int n;
    fscanf(F, "%d", &n);
    int s[n][n];
    for (int i = 0; i < n; i++) {
        int a = i + 1;
        for (int j = 0; j < n; j++) {
            s[i][j] = a;
            a++;
            if (a > n)
                a = 1;
        }
    }
    int j = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        count = 0;
        j = i;
        while (count < n) {
            if (j >= n)
                j -= n;
            for (int k = 0; k < n; k++)
                fprintf(F2, "%d ", s[j][k]);

            fprintf(F2, "\n");
            j++;
            count++;
        }
    }
    return 0;
}
