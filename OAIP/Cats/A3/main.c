#include <stdio.h>

int main()
{
    FILE * myfile;
    int k, c = 0;
    myfile = fopen("input.txt", "r");
    fscanf(myfile, "%d" ,&k);
    fclose(myfile);
    for(int i = 1; i <= k; ++i){
        int m, n = i;
        m = 0;
        while (n > 0) {
            m = m*10 + n%10;
            n = n/10;
        }
        if(i+m==k)
            c++;
    }
    myfile = fopen("output.txt", "w");
    fprintf(myfile, "%d", c);
    return 0;
}
