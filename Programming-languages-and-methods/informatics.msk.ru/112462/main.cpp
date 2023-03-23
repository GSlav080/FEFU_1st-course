#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char a;
    int A[10000][2] = {0}, B[10000][2] = {0}, num1, num2, dvig;
    FILE *F;
    F = fopen("input.txt", "r");
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


    int i = 0;
    while (A[i][0] != 0 || B[i][0] != 0) {
        A[i][1] += B[i][1];
        A[i][0] = max(A[i][0],B[i][0]);
        if (A[i][1] >= 1000) {
            A[i + 1][1]++;
            A[i][1] -= 1000;
        }

        i++;
    }
    ofstream F1;
    F1.open("output.txt");
    int FLAG = false;
    for(int j = i; j>=0; j--)
    {
        if (FLAG == false && A[j][1]!=0)
            FLAG = true;
        if(FLAG) {
            if (0 == A[j][1] && (A[j][0] == 3))
                F1 << "000";
            else if (10 <= A[j][1] && A[j][1] < 100 && (A[j][0] == 3))
                F1 << "0" << A[j][1];
            else if (0 < A[j][1] && A[j][1] < 10 && (A[j][0] == 3))
                F1 << "00" << A[j][1];
            else
                F1 << A[j][1];
        }
    }



    return 0;
}