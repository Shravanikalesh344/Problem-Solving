#include<stdio.h>

int main()
{


    char ch = 'A';
    int i = 11;
    float f = 31.90f;
    double d = 90.7865;

    char *cp = &ch;
    int *ip = &i;
    float *fp = &f;
    double *dp = &d; 


    printf("Data in Character is  %c\n:",*(cp));
    printf("Data in Integer  is  %d\n:",*(ip));
    printf("Data in Float  is  %f\n:",*(fp));
    printf("Data in Double  is  %f\n:",*(dp));
   


    return 0;

}