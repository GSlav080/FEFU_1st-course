#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, D;
    double x1, x2;
    cin >> a >> b >> c;
    D = b*b-4*a*c;
    if(a == 0)
    {
        if (b == 0)
        {
            if (c==0)
                cout << 3;
            else
                cout << 0;
        }
        else
        {
            if (c==0)
                cout << 0;
            else
                cout << 1<<" "<< -c/b;
        }
    }
    else
        if (b == 0)
        {
            if (c == 0)
            {
                cout <<0;
            }
            else
            {
                if (c > 0)
                    cout << 0;
                else
                {
                    if (D>0)
                    {
                        x1 = (-b + sqrt(D))/(2*a);
                        x2 = (-b - sqrt(D))/(2*a);
                        if (x2 < x1)
                            cout << 2 << " " << x2 << " " << x1;
                        else
                            cout << 2 << " " << x1 << " " << x2;

                    }
                    else if(D==0) {
                        x1 = (-b) / (2 * a);
                        cout << 1 << " " << x1;
                    }
                    else
                        cout << 0;
                }

            }

        }
        else {
            if (D > 0) {
                x1 = (-b + sqrt(D)) / (2 * a);
                x2 = (-b - sqrt(D)) / (2 * a);
                if (x2 < x1)
                    cout << 2 << " " << x2 << " " << x1;
                else
                    cout << 2 << " " << x1 << " " << x2;
            } else if (D == 0) {
                x1 = (-b) / (2 * a);
                cout << 1 << " " << x1;
            } else
                cout << 0;
        }
    return 0;
}