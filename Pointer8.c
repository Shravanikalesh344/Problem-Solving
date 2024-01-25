#include<stdio.h>

int main()
{
    const int no = 11;
    const int *p = &no;

    printf("%d\n",no);
    printf("%d\n",*(p));

    const int po = 12;
    const int * const pn = &po;

    printf("%d\n",po);
    printf("%d\n",*(pn));


    const int io = 11;
    int const * const ip = &io;

    printf("%d\n",io);
    printf("%d\n",*(ip));


    return 0;
}