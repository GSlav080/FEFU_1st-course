#include <stdio.h>
struct obj {
    long long int Number;
    int Count;
};
int Arr1[100000], arr2[100000];
struct obj n1[100000], n2[100000];
void mergesort(int * a, int l, int r);
long long int LessThan(struct obj Arr[], int Size, long long int Key); //Функция поиска индекса;


void mergesort(int mas[], int l, int r) {
    if (l == r) return;
    int m = (l + r) / 2;
    mergesort(mas, l, m);
    mergesort(mas, m + 1, r);
    int i = l;
    int j = m + 1;
    for (int k = 0; k <= r - l; k++) {
        if (((i <= m) && (mas[i] <= mas[j])) || (j > r)) {
            arr2[k] = mas[i];
            i++;
        }
        else {
            arr2[k] = mas[j];
            j++;
        }
    }
    for (int k = 0; k <= r - l; k++) mas[l + k] = arr2[k];
}
long long LessThan(struct obj Arr[], int Size, long long int Key) {
    long long l = 0;
    long long r = Size - 1;
    long long m = (r + l) / 2;
    while (l <= r) {
        if (Arr[m].Number == Key) return m + 1;
        else if (Arr[m].Number > Key) {
            r = m - 1;
        }
        else {
            l = m + 1;
        }
        m = (l + r) / 2;
    }
    if (Arr[m].Number > Key) return m;
    else return m + 1;
}
int main() {
    FILE * InPut = fopen("game.in", "r"),
            * OutPut = fopen("game.out", "w");
    int n, k, SizeNumbers;
    long long int AnswerOfTast = 0;

    fscanf(InPut, "%d", &n);
    fscanf(InPut, "%d", &k);
    for (int i = 0; i < n; i++) {
        fscanf(InPut, "%d", &Arr1[i]);
    }
    mergesort(Arr1, 0, n - 1);
    n1[0].Number = Arr1[0];
    n1[0].Count = 1;
    SizeNumbers = 1;
    for (int i = 1; i < n; i++) {
        if (Arr1[i] == n1[SizeNumbers - 1].Number) {
            n1[SizeNumbers - 1].Count++;
        }
        else {
            SizeNumbers++;
            n1[SizeNumbers - 1].Number = Arr1[i];
            n1[SizeNumbers - 1].Count = 1;
        }
    }
    int SizeNumbersTwo = 0;
    for (int i = 0; i < SizeNumbers; i++) {
        if (n1[i].Count > 2) {
            AnswerOfTast++;
        }
        if (n1[i].Count > 1) {
            n2[SizeNumbersTwo] = n1[i];
            SizeNumbersTwo++;
        }
    }
    for (int i = 0; i < SizeNumbers; i++) {
        long long int top = LessThan(n2, SizeNumbersTwo, n1[i].Number * k);
        long long int bottom = LessThan(n2, SizeNumbersTwo, n1[i].Number);
        AnswerOfTast += 3 * (top - bottom);
    }
    for (int i = 0; i < SizeNumbersTwo; i++) {
        long long int top = LessThan(n1, SizeNumbers, n2[i].Number * k);
        long long int bottom = LessThan(n1, SizeNumbers, n2[i].Number);
        AnswerOfTast += 3 * (top - bottom);
    }
    for (int i = 0; i < SizeNumbers; i++) {
        long long int top = LessThan(n1, SizeNumbers, n1[i].Number * k);
        long long int bottom = LessThan(n1, SizeNumbers, n1[i].Number);
        long long int len = top - bottom;
        AnswerOfTast += 6 * len * (len - 1) / 2;
    }
    fprintf(OutPut, "%lld", AnswerOfTast);
    fclose(InPut);
    fclose(OutPut);
    return 0;
}
