#include <iostream>
using namespace std;
int main() {
    int a, max=0, b=1, len=0, vr=0;
    cin >>a;
    if(a!=0)
        {
        cin>>max;
        if(max==0)
        {
            cout<<0;
            return 0;
        }
        }

    else {
        cout<<0;
        return 0;
    }
    bool Flag = false;
    while (true)
    {
        cin>>b;
        if(b==0) break;
        if(a<max and b<max) {
            if (Flag == true)
                len = (vr < len) ? vr : (len == 0) ? vr : len;
            Flag = true;
            vr = 0;
        }
        else
            vr++;
        a = max;
        max = b;

    }
    if (len!=0)
        len++;
    cout<<len;
    return 0;
}
