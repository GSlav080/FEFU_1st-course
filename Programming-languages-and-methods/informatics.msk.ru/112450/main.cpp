#include <iostream>
using namespace std;
int main() {
    int M;
    cin>>M;

    int tabl[M - 1];
    int j = 0;
    for (int i = 2; i <= M; i++) {
        tabl[j] = i;
        j++;
    }
    for (int i = 0; i < M - 1; i++) {
        if (tabl[i] != 0) {

            int z = tabl[i];
            for (j = i + z; j < M; j += z) {
                tabl[j] = 0;
            }
            cout<<z<<" ";
        }
    }

    return 0;
}
