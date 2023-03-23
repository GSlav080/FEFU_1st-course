#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char a;
    int A[10000][2] = {0}, B, num1, num2, i = 0, size1 = 0, c = 0, z = 0, dvig;
    FILE *F;
    F = fopen("input.txt", "r");
    while (true) {
        {
            fscanf(F, "%c", &a);
            if (a == '\n')
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

            }
        }
    }


    fscanf(F, "%d", &B);
    int ost = 0;
    num2;
    num1;
    fclose(F);
    ofstream F1("output.txt");
    bool FLAG = false;
    for (i = 9999; i >= 0; i--) {
        if (A[i][0] == 0)
            continue;
        num1 = ost * 1000 + A[i][1];
        num2 = num1 / B;

        ost = num1 - B * num2;
        if (!FLAG && num2 != 0)
        {
            FLAG = true;
            F1 << num2;
            continue;
        }
        if (FLAG) {
            if (0 == num2 && (A[i][0]== 3))
                F1 << "000";
            else if (10 <= num2 && num2 < 100 && (A[i][0] == 3))
                F1 << "0" << num2;
            else if (0 < num2 && num2 < 10 && (A[i][0] == 3))
                F1 << "00" << num2;
            else
                F1 << num2;
            }

    }
    F1 << '\n' << ost;


    return 0;

}