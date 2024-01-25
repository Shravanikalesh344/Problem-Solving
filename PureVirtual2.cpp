#include<iostream>

using namespace std;

class Base
{
    public:

    void Sun()
    {
        cout<<"Inside Sun of Base\n";
    }
    virtual void Run()
    {
        cout<<"Inside Run of Base\n";
    }
    virtual int Subs(int no1 , int no2) = 0;

};

class Derived:public Base
{
    public:
        void Run()
        {
            cout<<"Inside Run of Derived\n";
        }
        virtual void Gun()
        {
            cout<<"Inside Gun of Derived\n";
        }
        int Subs(int no1,int no2)
        {
            return no1 - no2;
        }

};

int main()
{
    Base *bptr = new Derived;

    bptr->Sun();
    bptr->Run();

    int iRet = 0;
    iRet = bptr->Subs(10,5);
    cout<<"Substraction is %d"<<iRet<<"\n";


    return 0;
}