#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    double sum=1;
    double z = 1;

    for(int i = 1; i<=N; i++)
    {
        z *= i;
        sum += 1/z;
    }
    cout << sum;
    return 0;
}
