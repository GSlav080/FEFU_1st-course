#include <stdio.h>

int main() {
    int n;
    FILE *myfile;
    myfile = fopen("C:\\Users\\GSV\\CLionProjects\\untitled\\OAAP\\Cats1\\C3\\input.txt", "r");
    fscanf(myfile, "%d", &n);
    int b;
    long long a2[1001] = {0}, a1[1001] = {0};
    for (int i = 0; i < n; i++) {
        fscanf(myfile, "%d", &b);
        if(b>=0)
            a2[b] += 1;
        else {
            a1[-b] += 1;
        }
    }
    myfile = fopen("output.txt", "w");
    for (int i = 1000; i > 0; i--)
        if (a1[i] != 0) {
            fprintf(myfile, "%d %d \n", -i, a1[i]);
        }
    for (int i = 0; i < 1001; i++)
        if (a2[i] != 0) {
            fprintf(myfile, "%d %d \n", i, a2[i]);
        }


    return 0;
}

