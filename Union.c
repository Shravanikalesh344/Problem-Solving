#include<stdio.h>

union Student
{
    int rollno;
   
    double Percent;

};

int main()
{
    union Student std;

    std.rollno = 10;
 //   std.name = 'A';
    std.Percent = 99.12;


    printf("Roll no is :%d\n",std.rollno);
   // printf("Name is :%d\n",std.name);
    printf("Percent is :%f\n",std.Percent);


    return 0;
}