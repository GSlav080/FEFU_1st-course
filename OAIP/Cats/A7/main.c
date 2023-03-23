#include <stdio.h>

int main() {
    int K, N;

    FILE * myfile;
    myfile = fopen("a.in", "r");
    fscanf(myfile, "%d %d", &K, &N);
    fclose(myfile);
    myfile = fopen("a.out", "w");
    fprintf(myfile, "%d %d", (N%K==0)?N/K:N/K+1 , (N%K==0)?K:N%K);
    fclose(myfile);
    return 0;
}
