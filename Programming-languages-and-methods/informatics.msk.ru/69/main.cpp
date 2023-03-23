#include <iostream>
using namespace std;
int main() {
    int size;
    cin>>size;
    int A[size];
    for(int i = 0; i<size; i++)
        cin>>A[i];
    for (int i = 0; i < size / 2; i++) {
        int tmp = A[i];
        A[i] = A[size - i - 1];
        A[size - i - 1] = tmp;
    }
    for(int i = 0; i<size; i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}
