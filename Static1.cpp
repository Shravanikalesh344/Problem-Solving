#include <iostream>
using namespace std;

class Demo
{

    public:
        int i;
        int j;

        Demo(int a = 10 , int b = 20) //parametrized constructor with default arguments 
        {
            i = a;
            j = b;
        }

        void display()
        {
            cout<<"Value of i"<<i<<"\n";
            cout<<"Value of j"<<j<<"\n";
        }

};

int main()
{
    Demo obj1;
    obj1.display(); // 10 , 20 

    Demo obj2(11);
    obj2.display(); // 11 , 20 

    Demo obj3(51,101);
    obj3.display(); // 51 , 101
    
    return 0;
}