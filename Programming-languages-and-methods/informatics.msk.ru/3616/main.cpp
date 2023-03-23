#include <iostream>
using namespace std;
int main() {
    int P, X, Y, K, kop, i = 0;
    cin >> P >> X >> Y >> K;
    while (i < K) {
        kop = X * P % 100;
        X = X + X * P / 100;
        Y = Y + Y * P / 100 + kop;
        X = X + Y / 100;
        Y = Y % 100;
        i++;
    }
    cout << X << " " << Y;
    return 0;

}
