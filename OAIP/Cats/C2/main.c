#include <stdio.h>
#include <stdlib.h>
int max(int a, int b){
    return (a > b) ? a : b;

}
int main() {
    FILE * inp = fopen("input.txt", "r");
    int N;
    fscanf(inp, "%llu", &N);
    int * Arr; int *A; int *B; int s1 = 0, s2 = 0;
    Arr = (int *) calloc(N + 2, sizeof(int));
    A = (int *)calloc(N, sizeof (int));
    B = (int*)calloc(N, sizeof (int));
    for (int i = 1; i != N + 1; i++){
        fscanf(inp, "%d", &Arr[i]);
        A[i - 1] = Arr[i];
        B[i - 1] = Arr[i];
    }
    Arr[0] = Arr[1] - 1;
    Arr[N + 1] = Arr[N] - 1;
    for (int i = 0; i < N; i++){
        if (i % 2 == 0){
            A[i] = max(Arr[i + 1], max(Arr[i], Arr[i + 2]) + 1);
        }
        else{
            B[i] = max(Arr[i + 1], max(Arr[i], Arr[i + 2]) + 1);
        }
        s1 += A[i];
        s2 += B[i];
    }
    FILE * out = fopen("output.txt", "w");
    if (s1 < s2){
        for (int i = 0; i < N; i++){
            fprintf(out, "%d ", A[i]);
        }
    }
    else{
        for (int i = 0; i < N; i++){
            fprintf(out, "%d ", B[i]);
        }
    }
}