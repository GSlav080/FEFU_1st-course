#include <iostream>
using namespace std;
int main() {
    int i = 0, c, a[2] = {0}, z = 1;
    c = getchar();
    while (c != EOF && c != '\n') {
            switch (c) {
                case '+':
                    a[0] = a[0] + a[1]*z;
                    a[1] = 0;
                    z = 1;
                    break;
                case '-':
                    a[0] = a[0] + a[1]*z;
                    a[1] = 0;
                    z = -1;
                    break;
                default:
                    a[1] = (c - 48)+ a[1]*10;
                    break;
            }
        c = getchar();
    }
    a[0] = a[0] + a[1]*z;

    cout << a[0]<<endl;
    return 0;
}
