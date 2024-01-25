#include<stdio.h>

# pragma pack(1)
struct Student
{
    int i;
    char ch;
    //float f;
    double d;

};

int main()
{

    struct Student std;
    printf("Size of std is :%d\n",sizeof(std));

    return 0;
}