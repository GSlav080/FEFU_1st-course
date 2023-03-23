#include <stdio.h>
#include <locale.h>
int main() {
    int a, b;
    char*local = setlocale(LC_ALL, "Ru");
    printf("Enter a:");
    scanf_s(" %d", &a);
    printf("Enter b:");
    scanf_s(" %d", &b);
    if (a>b) {
        printf("More");
    }
    else if (a<b) {
        printf("Less");
    }
    if (a==b) {
        printf("Equal");
    }
    return 0;
}
