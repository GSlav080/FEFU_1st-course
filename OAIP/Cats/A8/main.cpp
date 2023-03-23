#include <stdio.h>

int main() {
    int K;

    scanf("%d", &K);

    long long max = -9223372036854775807, j;
    for(long long i =0; i<K; i++)
    {
        scanf("%lli", &j);
        if (j>max)
        {
            max=j;
        }
    }
    printf("%lli", max);
    return 0;
}