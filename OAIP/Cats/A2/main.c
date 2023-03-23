#include <stdio.h>
#include <math.h>


int main() {
    int a, A[100], sum=0, Flag=0;
    FILE *myfile;
    myfile = fopen("input.txt", "r");
    fscanf_s(myfile, "%d", &a);
    fclose(myfile);

   if (a>100 ) {
        sum += a/100-1;
        a = a - 100 * (a / 100)+100;
    }
   else if(a < -100)
   {
       sum += -a/100-1;
       a = a + 100 * (-a / 100)-100;
   }
    A[0] = a;

    for(int i = 1; i<50; i++)
    {
        sum++;
        a = abs(a-100);
        for(int j=0; j<i; j++)
        {
            if(A[j]==a)
            {
                Flag = 1;
                break;
            }
        }
        if (Flag==1) {
            myfile = fopen("output.txt", "w");
            fprintf_s(myfile, "%d", sum);
            fclose(myfile);
            break;
        }
        A[i]=a;


    }

    return 0;
}
