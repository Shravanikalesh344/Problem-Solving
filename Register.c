#include<stdio.h>


static int a = 11;
void Display()
{

    register int no = 11;
    register int i;
    static int counter = 2;
    counter++;
   

    printf("Value of no is %d\n",no);
    printf("Value of i  is %d\n",i);
    printf("Valye of counter is %d\n",counter);

}

int main()
{

    Display();

    int a = 12;
    printf("Value of a is %d\n",a);

//    printf("%d\n",no);
    return 0;
}