#include <stdio.h>

#define ABS(a) (a < 0 ? (-a) : (a))

int main() {
    FILE *inp = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    int tpm = 0, N, M, corect = 0, corM = 0, join = 0, join2 = 0;
    int str1[2][10000] = {}, str2[10000] = {};
    char m_prev = -1, in;
    fscanf(inp, "%d%d\n", &N, &M);
    for (int i = 0; i < N; i++) {
        fscanf(inp, "%c", &in);
        if (in == '0') {
            ++corect;
        } else {
            if (corect) {
                str1[0][join++] = -corect;
            }
            str1[0][join++] = 1;
            corect = 0;
        }
    }
    if (in == '0') str1[0][join++] = -corect;
    fscanf(inp, "\n");
    for (int j = 0; j < M; j++) {
        fscanf(inp, "%c", &in);
        if (in == m_prev) {
            ++corM;
        } else {
            if (corM) {
                str2[join2++] = corM * ((m_prev == 'b') ? 1 : -1);
            }
            corM = 1;
            m_prev = in;
        }
    }
    str2[join2++] = corM * ((m_prev == 'b') ? 1 : -1);
    if (str2[0] < 0) {
        for (int i = 0; tpm + ABS(str1[0][i]) <= -str2[0] && i < join; i++) {
            tpm += ABS(str1[0][i]);
            str1[1][i] = 1;
        }
    } else {
        for (int i = 0; ++tpm <= str2[0] && i < join && str1[0][i] == 1; str1[1][i++] = 1);
    }
    for (int j = 1; j < join2; j++) {
        for (int i = join - 1; i >= 0; i--) {
            if (str1[1][i]) {
                tpm = 0;
                if (str2[j] < 0) {
                    for (int i2 = i + 1; (tpm + ABS(str1[0][i2]) <= -str2[j]) && i2 < join; i2++) {
                        tpm += ABS(str1[0][i2]);
                        str1[1][i2] = 1;
                    }
                } else {
                    for (int i2 = i + 1; ++tpm <= str2[j] && str1[0][i2] == 1; str1[1][i2++] = 1);
                }
                str1[1][i] = 0;
            }
        }
    }
    fprintf(out, "%c", str1[1][join - 1] ? 'Y' : 'N');
    return 0;
}
