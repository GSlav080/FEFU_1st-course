#include <iostream>
using namespace std;
int main() {
    int n, count = 0, a, b, c, FLAG=0; cin >> n >> a;
    if(n<=1)
    {
        cout<<0;
        return 0;
    }
    cin>>b;
    if(a==b)
    {
        count++;
        FLAG=1;
    }
    for(int i = 0; i < n-2; i++)
    {
        c = b;

        cin>>b;

        if((a<c&&c>b)||(a>c&&c<b))
        {
            a = c;
        }
        else
        {
            if(FLAG==1 && !(a==b==c))
            {
                FLAG=0;
                continue;
            }
            count++;
        }
    }
    cout << count;
    return 0;
}