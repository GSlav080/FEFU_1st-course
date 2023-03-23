#include <stdio.h>
#include <math.h>

int max(int x, int y) {
    return (x > y) ? x : y;
}

int main() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    int count, coun2;
    fscanf(in, "%d", &count);
    int Tree = (int) (pow(2, ceil(log2(count))));
    int Arr_tree[Tree * 2];
    for (int i = Tree; i < Tree * 2; i++) {
        if (i < count + Tree) {
            fscanf(in, "%d", &Arr_tree[i]);
        } else {
            Arr_tree[i] = -(float) ('inf');
        }
    }
    for (int i = Tree - 1; i > 0; i--) {
        Arr_tree[i] = max(Arr_tree[i * 2], Arr_tree[i * 2 + 1]);
    }
    fscanf(in, "%d", &coun2);
    int MoveLeft = 0, right = 0;
    int otv[coun2], maximum = Arr_tree[Tree];
    char mov;
    fscanf(in, "%c", &mov);
    for (int i = 0; i < coun2; i++) {
        fscanf(in, "%c", &mov);
        if (mov == 'R') {
            right++;
        } else {
            MoveLeft++;
        }
        int RightIndex = Tree + right;
        int LeftIndex = Tree + MoveLeft;
        while (LeftIndex < RightIndex - 1) {
            if (RightIndex % 2 == 0) {
                maximum = max(maximum, Arr_tree[RightIndex]);
            }
            if (LeftIndex % 2 == 1) {
                maximum = max(maximum, Arr_tree[LeftIndex]);
            }

            LeftIndex = (LeftIndex + 1) / 2;
            RightIndex = (RightIndex - 1) / 2;
        }

        if (LeftIndex == RightIndex) {
            maximum = max(maximum, Arr_tree[RightIndex]);
        } else if (LeftIndex == RightIndex - 1) {
            maximum = max(maximum, max(Arr_tree[LeftIndex], Arr_tree[RightIndex]));
        }
        otv[i] = maximum;
        maximum = -1000000000;
    }
    for (int i = 0; i < coun2; i++) {
        fprintf(out, "%d ", otv[i]);
    }

}
