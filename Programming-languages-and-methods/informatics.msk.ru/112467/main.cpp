#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char a;
    int A[10000][2] = {0}, B[10000][2] = {0}, num1, num2, dvig;
    FILE *F;
    F = fopen(R"(C:\Users\GSV\CLionProjects\C++\112467\input.txt)", "r");
    int c = 0, sim = 0;
    while (true) {
        fscanf(F, "%c", &a);
        if (c == 2)
            break;
        if (a != '\n' and c == 0) {
            num1 = (int) a - '0';
            num2 = A[0][1] * 10 + num1;

            int j = 0;
            A[0][1] = num2;
            while (true) {
                if (A[j][0] < 3) {
                    A[j][0]++;
                    break;
                } else {

                    dvig = A[j][1] / 1000;
                    A[j][1] %= 1000;
                    A[j + 1][1] = A[j + 1][1] * 10 + dvig;
                    if (A[j][0] > 3) {
                        A[j + 1][0]++;
                    }
                    j++;

                }
            }

        } else if (a != '\n' and c == 1) {
            num1 = (int) a - '0';
            num2 = B[0][1] * 10 + num1;

            int j = 0;
            B[0][1] = num2;
            while (true) {
                if (B[j][0] < 3) {
                    B[j][0]++;
                    break;
                } else {

                    dvig = B[j][1] / 1000;
                    B[j][1] %= 1000;
                    B[j + 1][1] = B[j + 1][1] * 10 + dvig;
                    if (B[j][0] > 3) {
                        B[j + 1][0]++;
                    }

                    j++;

                }
            }
        } else {
            c++;
        }
    }

    for(int i = 0 ; i<100;i++)
        cout<<A[i][0]<<' '<<A[i][1]<<' '<<B[i][0]<<' '<<B[i][1]<<endl;

    ofstream F1;
    F1.open("output.txt");




    return 0;
}