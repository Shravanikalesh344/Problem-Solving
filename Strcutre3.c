#include<stdio.h>

struct Demo
{
    int *p;
    int *q;
    double d;


};



int main()
{
    struct Demo obj;

    int i = 20;
    int j = 30;
    

    obj.p = &i;
    obj.q = &j;
    obj.d =90.9999;

    printf("%d\n",*(obj.p));
    printf("%d\n",*(obj.q));
    printf("%d\n",obj,d);  

    return 0;
}