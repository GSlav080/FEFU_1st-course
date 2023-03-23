#include <iostream>
#include <fstream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    unsigned char c, A[128];
    int a = 0;
    ifstream F;
    cin >> c;
    for (int i = 7; i >= 0; i--) {
        if (((c >> i) & 1) == 1) {
            a++;
        }
    }
    if (a % 2 == 0) {
        cout << c;
    } else {
        int m = 1 << 7;
        c = c ^ m;
        cout << c;
    }
    return 0;
}