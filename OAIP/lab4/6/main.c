#include <stdio.h>

int main() {
    FILE *input;


    char str[128][128], a='f';
    int i=0, size=0, j=0;
    input = fopen("C:\\Users\\GSV\\CLionProjects\\untitled\\OAAP\\lab4\\6\\input.txt", "r");
    while (a!='\n') {
            fscanf(input, "%c", &a);
            if(a!=' ') {
                str[i][j] = a;
                size++;
                j++;
            }
            else{
                size--;
                for (int sl = size; sl >=0 ; sl--) {
                    printf("%c", str[i][sl]);
                }
                printf("\n");
                i++;
                size=0;
                j = 0;
            }
    }


    return 0;
}
