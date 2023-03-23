#include <stdio.h>
#include <math.h>

int main() {
    int N, K;
    FILE *myfile;
    myfile = fopen(R"(C:\Users\GSV\CLionProjects\untitled\OAAP\Cats1\C5\input.txt)", "r");
    fscanf(myfile,  "%d %d", &N, &K);
    int A[K], n, i = 0;
    while (N>0 && K!=0)
    {
        n =  sqrt(N);
        A[i] = n;
        printf("%d", n);
        N -= n*n;
        K--;
        i++;
    }
    if(N==0 && K>=0)
    {   printf("YES\n");
        for(int j = i-1; j>=0; j--)
            printf("%d", A[j]);
    }
    else
        printf("NO\n");



    return 0;
}
