#include <iostream>
using namespace std;
int main() {
    double E, S=0, si=0, i1=1, i2=25, i=0;
    cin >> E;
    do{
        i++;
        i1 *= 4;
        i2 *= 5;
        S += 1./(i1+i2);
        si = 1./(i1+i2);
    } while (si>= E);
    cout << S;
    return 0;
}
