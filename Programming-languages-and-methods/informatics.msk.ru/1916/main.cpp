#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    cin >> a;
    int sost = 0, sim, arr[8][5] = {
            {1,  2, 10, 10, 10},
            {10, 2, 10, 10, 10},
            {10, 2, 3,  4,  11},
            {10, 5, 10, 10, 10},
            {6,  7, 10, 10, 10},
            {10, 5, 10, 4,  11},
            {10, 7, 10, 10, 10},
            {10, 7, 10, 10, 11},
    };
    a += '\0';
    for (char i: a) {
        if (sost == 10 or sost == 11)
            break;
        if (i == '+' || i == '-')
            sim = 0;
        else if (i == '0' || i == '1' || i == '2' || i == '3' || i == '4' || i == '5' || i == '6' || i == '7' ||
                 i == '8' || i == '9')
            sim = 1;
        else if (i == '.')
            sim = 2;
        else if (i == 'E' || i == 'e')
            sim = 3;
        else if (i == '\0')
            sim = 4;
        else {
            sost = 10;
            break;
        }
        sost = arr[sost][sim];
    }
    if (sost == 11)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
