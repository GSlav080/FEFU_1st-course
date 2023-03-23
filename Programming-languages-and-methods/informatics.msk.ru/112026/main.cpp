#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    int S = 0, i = 0;
    cin >> a;
    char c;
    cin.clear();
    cin.get();
    while (cin.get(c)) {
        if (c == '\n') break;
        if(c!=a[i])
            S++;
        i++;
    }
    cout<<S;
    return 0;
}