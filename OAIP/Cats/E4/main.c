#include <stdio.h>
#include <stdlib.h>

struct hom {
    int obj;
    int ind;
};

void SORT(struct hom *a, int l, int r) {
    if (l == r) return;
    int mid = (l + r) / 2;

    SORT(a, l, mid);
    SORT(a, mid + 1, r);
    int i = l;
    int j = mid + 1;
    struct hom tmp[r];
    for (int step = 0; step < r - l + 1; step++) {
        if ((j > r) || ((i <= mid) && (a[i].obj < a[j].obj))) {
            tmp[step] = a[i];
            i++;
        } else {
            tmp[step] = a[j];
            j++;
        }
    }

    for (int step = 0; step < r - l + 1; step++)
        a[l + step] = tmp[step];
}

int main() {
    FILE *inp = fopen("shelter.in", "r");
    FILE *out = fopen("shelter.out", "w");
    int size_home, SizeOfBomb;
    fscanf(inp, "%d", &size_home);
    struct hom arr_home[size_home];

    for (int i = 0; i < size_home; i++) {
        fscanf(inp, "%d", &arr_home[i].obj);
        arr_home[i].ind = i + 1;
    }
    fscanf(inp, "%d", &SizeOfBomb);
    struct hom ArrBomb[SizeOfBomb];
    for (int i = 0; i < SizeOfBomb; i++) {
        fscanf(inp, "%d", &ArrBomb[i].obj);
        ArrBomb[i].ind = i + 1;
    }
    SORT(arr_home, 0, size_home - 1);
    SORT(ArrBomb, 0, SizeOfBomb - 1);
    int C = 0;
    int len, min;
    int array[size_home];
    for (int i = 0; i < size_home; i++) {
        min = abs(arr_home[i].obj - ArrBomb[C].obj);
        len = abs(arr_home[i].obj - ArrBomb[C + 1].obj);
        while (min >= len) {
            C++;
            min = len;
            len = abs(arr_home[i].obj - ArrBomb[C + 1].obj);
            if (C == SizeOfBomb) {
                for (int j = i; j < size_home; j++) {
                    array[arr_home[j].ind] = ArrBomb[C].ind;
                }
                return 0;
            }
        }
        array[arr_home[i].ind] = ArrBomb[C].ind;
    }
    for (int i = 1; i < size_home + 1; i++) {
        fprintf(out, "%d ", array[i]);
    }
}