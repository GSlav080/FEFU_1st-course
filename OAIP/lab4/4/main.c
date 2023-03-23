#include <stdio.h>

int main() {
    FILE * file;
    char str[128], a='g';
    int size=0;
    file = fopen("C:\\Users\\GSV\\CLionProjects\\untitled\\OAAP\\lab4\\4\\input.txt", "r");
    while (a!='\n')
    {
        fscanf(file, "%c", &a);
        str[size] = a;
        size++;
    }
    size--;
    for(int i=0; i<(size/2); i++)
        if(str[i]==str[size-i-1])
            printf("%c", str[i]);
    return 0;
}
