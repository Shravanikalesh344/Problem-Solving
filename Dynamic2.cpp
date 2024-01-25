#include<iostream>
#include<stdlib.h>

using namespace std;

class Demo
{
    public :
        int i,j,k;

    Demo()
    {
        cout<<"Inside Constructor\n";
    }
    ~Demo()
    {
        cout<<"Inside Destructor\n";
    }
    void display()
    {
        cout<<"Inside Display\n";
    }


};
int main()
{
    Demo obj;
    obj.display();

    Demo *ptr = new Demo;
    //Demo *ptr = (Demo *)malloc(sizeof(Demo));
    ptr->display();
    
    delete ptr;
    // free(ptr);
    return 0;
}