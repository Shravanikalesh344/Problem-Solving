#include<stdio.h>

int main()
{

    int no = 12 ;
    const int no1 = 34;
    int  const  *const  p = &no;

    printf("%d\n",*(p));

    

    printf("%d\n",*(p));

    return 0;
}