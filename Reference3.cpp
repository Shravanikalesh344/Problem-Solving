#include<iostream>

using namespace std;

class Demo
{
    public :

    int no = 10;
    int &ref = no;
    int &x = no;

    int *p = &no;
    int *(&q) = p;

    void fun()
    {
        cout<<no<<"\n"; // 10
        cout<<ref<<"\n"; // 10
        cout<<x<<"\n"; // 10
        ref++; 
        cout<<ref<<"\n"; // 11
        cout<<*(q)<<"\n";
    }

};

int main()
{
    Demo obj1,obj2;
  
    obj1.fun();
    obj2.fun();

    return 0;
}