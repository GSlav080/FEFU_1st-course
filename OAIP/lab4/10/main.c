#include <stdio.h>

const char *a[] = {"zero",
                   "one",
                   "two",
                   "three",
                   "four",
                   "five",
                   "six",
                   "seven",
                   "eight",
                   "nine",
                   "ten",
                   "eleven",
                   "twelve"};


int slov(int x) {
    if(x <= 12)
    {
        printf("%s ",a[x]);
    }
    if(x >= 1000)
    {
        slov(x/1000);
        x %= 1000;
        printf("thousand ");
    }
    if(x >= 100)
    {
        printf("%s ",a[x/100]);
        x %= 100;
        printf("hundred ");
    }
    if(x >= 20)
    {
        switch(x/10)
        {
            case 2 : printf("twen"); break;
            case 3 : printf("thir"); break;
            case 5 : printf("fif"); break;
            case 8 : printf("eigh"); break;
            default : printf(a[x/10]); break;
        }
        printf("ty ");
        x %= 10;
    }
    if(x >= 13)
    {
        x %= 10;
        switch(x)
        {
            case 2 :  printf("twen"); break;
            case 3 : printf("thir"); break;
            case 5 : printf("fif"); break;
            case 8 : printf("eigh"); break;
            default : printf(a[x]);
        }
        printf("teen");
    }
}


int main() {
    FILE *input;
    input = fopen("C:\\Users\\GSV\\CLionProjects\\untitled\\OAAP\\lab4\\10\\input.txt", "r");
    int x;


    while (!feof(input)) {
        fscanf_s(input, "%d", &x);
        slov(x);
        printf("\n");


    }
    return 0;
}
