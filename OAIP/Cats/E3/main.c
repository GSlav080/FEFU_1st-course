#include <stdio.h>
#include <stdlib.h>

#define max(X, Y) (((X) > (Y)) ? (X) : (Y))

int main() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    long long N, R, center, z = 0;

    long long *MATRIX;
    fscanf(in, "%lld", &N);
    fscanf(in, "%lld", &R);
    MATRIX = (long long *) calloc(N, sizeof(long long));
    center = N / 2 + N % 2;

    if (R <= center) {
        MATRIX[R - 1] = (N - (R - 1) * 2) * (N - (R - 1) * 2);
        for (long long i = max(z, R - 2); i <= N - R; i++) {
            MATRIX[i] = MATRIX[R - 1] + (R - i - 1);
        }
    } else {
        MATRIX[R - 1] = ((N - (R - 1) * 2 - 1) * (N - (R - 1) * 2 - 1) + 1);
        for (long long i = R - 2; i >= N - R; i--) {
            MATRIX[i] = MATRIX[R - 1] - R + i + 1;
        }
    }
    for (long long i = 0; i < center; i++) {
        if (MATRIX[i] != 0) {
            break;
        } else {
            MATRIX[i] = (N - i * 2) * (N - i * 2) - ((N - i * 2) - 1) * 4 + R - 1 - i;
        }
    }
    for (long long i = 0; i < center; i++) {
        if (MATRIX[N - 1 - i] != 0) {
            break;
        } else {
            MATRIX[N - 1 - i] = (N - i * 2) * (N - i * 2) - (N - i * 2) - R + i + 2;

        }
    }
    for (long long i = 0; i < N; i++) {
        fprintf(out, "%lld ", MATRIX[i]);
    }
}