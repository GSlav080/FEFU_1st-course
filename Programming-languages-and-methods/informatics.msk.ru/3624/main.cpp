#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double  factorial,x1, x, sum=1;
    int n;
    cin >> n >> x;
    factorial = 1;
    x1 = 1;
    for (int i = 1; i<=n; i++)
    {
        x1 *= x;
        factorial *= i;
        sum+= x1/factorial;
    }
    cout << sum ;

    return 0;
}
