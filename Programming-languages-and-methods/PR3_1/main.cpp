
#include <fstream>
#include <iostream>
using namespace std;
int main() {
    ifstream fin("C:\\Users\\GSV\\CLionProjects\\C++\\PR3_1\\input3.txt");
    int N;
    fin >> N;
    int a1, b1, a2, b2;
    fin >>a1 >> b1;
    int Flag = 1;
    for(int i=1; i<N; i++)
    {
        fin >> a2 >> b2;
        a1 = (a1<a2)?a2:a1;
        b1 = (b1>b2)?b2:b1;
        if (a1>b1)
        {
            Flag = 0;
            break;
        }

    }
    if (Flag==1) {
        cout << a1;

    } else
        cout << "Not point";

    return 0;
}
