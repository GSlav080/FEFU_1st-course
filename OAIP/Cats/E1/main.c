#include <stdio.h>
#include <stdlib.h>

int func(int arr[], int left, int right, int key, int size) {
    int midd = 0;
    for (int i = 0; i <= size; i++) {
        midd = (left + right) / 2;
        if (key < arr[midd]) {
            right = midd - 1;
        } else if (key > arr[midd]) {
            left = midd + 1;
        } else {
            return midd;
        }
        if (left > right) { return -1; }
    }
}

int main() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    int Size_A, Size_B, Size_C, count = 0;
    int *A;
    int *B;
    int *C;
    fscanf(in, "%d", &Size_A);
    fscanf(in, "%d", &Size_B);
    fscanf(in, "%d", &Size_C),
            A = (int *) malloc(sizeof(int) * Size_A);
    B = (int *) malloc(sizeof(int) * Size_B);
    C = (int *) malloc(sizeof(int) * Size_C);
    for (int i = 0; i < Size_A; i++) {
        fscanf(in, "%d", &A[i]);
    }
    for (int i = 0; i < Size_B; i++) {
        fscanf(in, "%d", &B[i]);
    }
    for (int i = 0; i < Size_C; i++) {
        fscanf(in, "%d", &C[i]);
    }
    for (int i = 0; i < Size_A; i++) {
        if (func(B, 0, Size_B, A[i], Size_B) != -1) {
            if (func(C, 0, Size_C, A[i], Size_C) != -1) {
                count += 1;
            }
        }
    }
    fprintf(out, "%d", count);


}