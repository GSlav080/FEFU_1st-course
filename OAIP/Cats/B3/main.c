#include <stdio.h>

int main() {
    FILE * mufile;
    int n, a, sum=0;
    mufile = fopen("input.txt", "r");
    fscanf( mufile, "%d", &n);
    while (n--)
    {
        fscanf( mufile, "%d", &a);
        sum+= a;
    }
    mufile = fopen("output.txt", "w");
    fprintf( mufile, "%d", sum);
    return 0;
}
