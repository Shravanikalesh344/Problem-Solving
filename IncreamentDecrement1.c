#include<stdio.h>

int main()
{

    int No = 0;
    printf("Value of No is %d\n",No);
    int i = 10;
    No = ++i;
    printf("Value of No is %d\n",No);
   
    int k = 12;
    No = k++;
    printf("Value of No is %d\n",No);

    int j = 10;
    No = --j;
    printf("Value of No is %d\n",No);

    int l = 8;
    No = l--;

    printf("Value of No is : %d\n",No);
    



    return 0;
}