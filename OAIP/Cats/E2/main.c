struct Solde {
    float height;
    char Name[256];
};
struct Solde Arr[100000], ArrBuff[100000];

void SORT(struct Solde Arr[], int l, int r) {
    if (l == r) return;
    int mid = (l + r) / 2;
    SORT(Arr, l, mid);
    SORT(Arr, mid + 1, r);
    int i = l;
    int j = mid + 1;
    for (int step = 0; step < r - l + 1; step++) {
        if ((j > r) || ((i <= mid) && (Arr[i].height >= Arr[j].height))) {
            ArrBuff[step] = Arr[i];
            i++;
        } else {
            ArrBuff[step] = Arr[j];
            j++;
        }
    }
    for (int step = 0; step < r - l + 1; step++) Arr[l + step] = ArrBuff[step];
}

#include <stdio.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    int N;
    fscanf(in, "%d", &N);
    for (int i = 0; i < N; i++) {
        fscanf(in, "%f %s", &Arr[i].height, &Arr[i].Name);
    }
    SORT(Arr, 0, N - 1);
    for (int i = 0; i < N; i++) {
        fprintf_s(out, "%s\n", Arr[i].Name);
    }
}
