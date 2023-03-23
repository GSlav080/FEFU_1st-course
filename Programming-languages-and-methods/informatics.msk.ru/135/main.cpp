#include <iostream>
using namespace std;

int main() {
    char a;
    int A[10000] = {0}, B, num1,num2=0, i = 10000, size1 = 1, size2 = 1;
    FILE *F;
    F = fopen(R"(C:\Users\GSV\CLionProjects\C++\135\input.txt)", "r");
    int c = 0;
    while (true) {
        fscanf(F, "%c", &a);

        if (a != '\n') {
            num1 = (int) a - '0';
            i--;
            A[i] = num1;
            size1++;
        } else {
            break;
        }
    }
    int size=(size1>size2)?size1:size2;
    fscanf(F, "%d", &B);
    cout<<B;
    return 0;
}
