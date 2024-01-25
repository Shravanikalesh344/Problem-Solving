#include<stdio.h>



int addition(int c ,int d)
{
    int *cp = &c;
    int *dp = &d;

    int add = 0;
    int *addp = &add;

    *addp = *cp + *dp;

    return *addp; 

}
int substraction(int f ,int r)
{
    int *fp = &f;
    int *rp = &r;

    int sub = 0;
    int *subp = &sub;

    *subp = *rp - *fp;

    return *subp;

}
int main()
{

    int a = 0;
    int b = 0;
    int sum = 0;
    int minus = 0;

    printf("enter number 1:\n");
    scanf("%d",&a);
    printf("Enter number 2:\n");
    scanf("%d",&b);

    //int *ap = &a;
    //int *bp = &b;

    //int add = 0;

    //int *addp = &add;

    //*addp = *ap + *bp;

    int ch = 0;

    printf("1-Addition\n2-Substraction\n");
    printf("Enter your choice\n");
    scanf("%d\n",&ch);

    switch(ch)
    {

        case 1 :
        sum = addition(a,b);

        printf("Addtion is %d\n",sum);
        break;


        case 2 :

            minus = substraction(a,b);

            printf("Substraction is :%d\n",minus);
            break;


    }

    return 0;
}