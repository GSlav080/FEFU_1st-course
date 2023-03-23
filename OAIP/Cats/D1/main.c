#include <stdio.h>
#include <math.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    double X1, Y1, X2, Y2, X0, Y0, alpha, X3, Y3, X4, Y4;
    fscanf(in, "%lf %lf", &X1, &Y1);
    fscanf(in, "%lf %lf", &X2, &Y2);
    fscanf(in, "%lf %lf", &X0, &Y0);
    fscanf(in, "%lf", &alpha);
    double Corner = M_PI * alpha / 180;
    X3 = cos(Corner) * (X1 - X0) - sin(Corner) * (Y1 - Y0);
    Y3 = sin(Corner) * (X1 - X0) + cos(Corner) * (Y1 - Y0);
    X4 = cos(Corner) * (X2 - X0) - sin(Corner) * (Y2 - Y0);
    Y4 = sin(Corner) * (X2 - X0) + cos(Corner) * (Y2 - Y0);
    fprintf(out, "%.9f %.9f %.9f %.9f", X3 + X0, Y3 + Y0, X4 + X0, Y4 + Y0);
}