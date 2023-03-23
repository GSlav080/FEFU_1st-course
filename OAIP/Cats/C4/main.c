#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    FILE * in = fopen("input.txt", "r");
    FILE * out = fopen("output.txt", "w");
    float N, ost;
    int K;
    float * otvet = (float *)malloc(sizeof (float ));
    fscanf(in, "%f", &N);
    fscanf(in, "%d", &K);
    int SqrtN = floor(sqrt(N));
    int Flag = 0, SqrtBuff;
    while (SqrtN > 0){
        ost = N;
        ost = ost - SqrtN * SqrtN;
        otvet[0] = SqrtN;
        if (ost != 0){
            for (int i = 1; i < K; i++){
                SqrtBuff = floor(sqrt(ost));
                ost = ost - SqrtBuff * SqrtBuff;
                otvet = (float *) realloc(otvet, sizeof(float ));
                otvet[i] = SqrtBuff;
                if (ost == 0){
                    K = i + 1;
                    Flag = 1;
                    break;
                }
            }
        }
        else{
            Flag = 1;
            K = 1;
        }
        SqrtN --;
        if (Flag == 1){
            break;
        }

    }
    if (Flag != 0){
        fprintf(out, "YES\n");
        for (int i = 0; i < K; i++){
            fprintf(out, "%d ", (int)otvet[i]);
        }
    }
    else {
        fprintf(out, "NO\n");
    }

}