#include<stdio.h>

int main()
{

    float value = 3.14f;
    float *p = &value;
    float *q = p;
    float ans = *p + *q ;

    printf("%f\n",value);
    printf("%f\n",*(p));
    printf("%f\n",*(q));
    printf("%f\n",ans);

    return 0;
}