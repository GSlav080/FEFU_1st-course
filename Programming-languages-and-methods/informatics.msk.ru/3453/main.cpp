#include <iostream>
#include <string>
#include <set>
using namespace std;
int main() {
    int commands; cin>>commands;
    set<int> A;
    string command;
    while (commands--)
    {
        cin>>command;

        if (command=="COUNT")
            cout<<A.size()<<"\n";
        else if(command=="ADD")
        {
            int a; cin>>a;
            A.insert(a);
        }
        else if(command=="PRESENT")
        {
            int a; cin>>a;
            if(A.count(a))
                cout<<"YES"<<"\n";
            else
                cout<<"NO"<<"\n";
        }
    }
    return 0;
}
