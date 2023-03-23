#include <iostream>
using namespace std;
int main() {
    int k; cin>>k;
    int A[k][2], sum = 0, temp = 1, vr, a, j=0;
    cin>>vr;
    for(int i=1; i<k; ++i)
    {
        cin>>a;
        if(vr==a)
            temp++;
        else
        {
            A[j][0] = vr;
            A[j][1] = temp;
            temp = 1; vr=a;
            j++;}
    }
    A[j][0] = vr; A[j][1] = temp; temp = 0;
    int i=0, b=0,size= j+1;
    j++;
    while (j--)
    {
        b = i;
        bool Flag = false;
        if(i>0) {
            int B[i], ji = 1;
            B[0] = b;
            while (b > 0) {

                b--;

                if (A[b][0] != -1 and A[b][0] == A[i][0]) {
                    B[ji] = b;
                    ji++;
                    Flag = true;
                } else if (A[b][0] != -1 and A[b][0] != A[i][0])
                    break;
            }

                if (Flag) {
                    int sum_2 = 0;
                    for (int ii = 0; ii < ji; ii++) {
                        sum_2 += A[B[ii]][1];
                    }
                    if (sum_2 >= 3) {
                        sum += sum_2;
                        for (int ii = 0; ii < ji; ii++) {
                            A[B[ii]][0] = -1;
                        }
                    }
                }


        }
        if(A[i][1]>=3 and !Flag)
        {
            sum += A[i][1];
            A[i][0] = -1;
        }
        i++;
    }

    cout<<sum;
    return 0;
}
//34
//1 2 3 4 5 6 6 1 1 2 2 2 1 6 5 5 1 1 1 4 4 3 1 1 1 3 2 2 1 1 1 2 1 1

// 2 1 1