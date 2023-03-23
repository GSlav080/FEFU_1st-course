#include <stdio.h>

int main() {
    FILE *input;


    char a = 'f';
    int sim = 0, id = 0, cons = 0, alp=0;
    input = fopen("C:\\Users\\GSV\\CLionProjects\\untitled\\OAAP\\lab4\\8\\input.txt", "r");
    while (!feof(input)) {
        fscanf(input, "%c", &a);

        if (a == '\n' || a =='\0') {
            if(id==3 && cons!=0 && alp ==0)
                printf("ID\n");
            else if (id==0 && cons!=0 && alp ==0)
                printf("CONST\n");
            else
                printf("ERROR\n");
            id = 0;
            alp=0;
            cons = 0;
        } else {
            if (a == 'i' && id == 0) {
                id++;
            } else if (a == 'd' && id == 1) {
                id++;
            }
            else if (a == '_' && id == 2) {
                id++;
            }
            else if(a == '1' || a == '2' || a=='3' || a=='4'|| a == '5' || a=='6' || a=='7'|| a == '8' || a=='9' || a=='0')
                cons++;
            else
                alp++;
        }


    }
    if(id==3 && cons!=0 && alp ==0)
        printf("ID\n");
    else if (id==0 && cons!=0 && alp ==0)
        printf("CONST\n");
    else
        printf("ERROR\n");


    return 0;
}
