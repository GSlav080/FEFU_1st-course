#include <stdio.h>
FILE * myfile;

int* recursion(int *arr, int size, int *myfile)
{


    for(int j = 0; j<size; j++)
        fprintf(myfile,"%d", arr[j]);
    int Flag = 0;
    for(int i = size-1; i>=0; i--)
    {
        if(arr[i]==1)
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] = 1;
            fprintf(myfile, "\n");
            Flag = 1;
            break;
        }
    }
    if(Flag==1)
        recursion(arr, size, myfile);
    else
        return 0;

}

int main() {

    myfile = fopen("input.txt", "r");
    int size;
    fscanf( myfile, "%d" ,&size);
    fclose(myfile);
    int NUM[size];
    for(int i = 0; i< size; i++)
        NUM[i]=0;
    myfile = fopen("output.txt", "w");
    recursion(NUM, size, myfile);

    return 0;
}
