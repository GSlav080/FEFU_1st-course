#include <iostream>
using namespace std;
int main() {
    int n;
    double x, a, S=0;
    cin>>n>>x>>S;
    for(int i=0; i<n; i++)
    {
        S*=x;
        cin>>a;
        S+=a;

    }
    cout<<S;
    return 0;
}
