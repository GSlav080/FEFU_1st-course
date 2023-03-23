#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double alpha;
    int s, h, m;
    cin >> alpha;
    h = alpha / 30;
    m = fmod(alpha, 30)*2;
    s = fmod(alpha, 0.5)*120;

    cout << h << " " << m<< " " << s;

    return 0;
}