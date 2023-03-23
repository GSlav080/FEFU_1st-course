#include <stdio.h>
#include <math.h>


int main() {
    FILE * myfile;
    myfile = fopen("input.txt", "r");
    int A[4][2], C[2], CEN[2];
    double min=2147483647, center;
    fscanf( myfile, "%d %d %d %d %d %d", &A[0][0], &A[0][1], &A[1][0], &A[1][1], &C[0], &C[1]);
    fclose(myfile);
    A[2][0] = A[0][0];
    A[2][1] = A[1][1];
    A[3][0] = A[1][0];
    A[3][1] = A[0][1];
    int Flag = 0;
    if((C[0]>=A[0][0]&&C[0]<=A[1][0])||(C[0]<=A[0][0]&&C[0]>=A[1][0]))
        Flag=0;
    else
        Flag = 1;
    if((C[1]>=A[0][1]&&C[1]<=A[1][1])||(C[1]<=A[0][1]&&C[1]>=A[1][1]))
        Flag=0;
    else
        Flag = 1;

    double perl;
    for (int i=0; i<4; i++)
    {
        perl = sqrt(pow(C[0]-A[i][0], 2)+pow(C[1]-A[i][1], 2));
        if (perl<min)
            min = perl;

    }
    CEN[0] = (A[3][0]+A[0][0])/2;
    CEN[1] = (A[0][1]+A[2][1])/2;
    center = sqrt(pow(C[0]-CEN[0], 2)+pow(C[1]-CEN[1], 2));

    myfile = fopen("output.txt", "w");

    printf("%f %f ", center, min);
    if(center>min && Flag==0)
        fprintf(myfile, "CORNER");
    else
        fprintf(myfile, "CENTER");
    fclose(myfile);

    return 0;
}
//100 200 300 400 200 300