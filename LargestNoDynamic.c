#include<stdio.h>

int main()
{

    float value = 3.14;
    float *p = &value;
    float *q = p;
    float ans = *p + *q ;

    printf("Value is :%d\n",value);
    printf("%d\n",*(p));
    printf("%d\n",*(q));
    printf("%d\n",ans);

    return 0;
}