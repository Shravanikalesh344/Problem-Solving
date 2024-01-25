#include<iostream>

using namespace std;

class Base 
{
    protected:
        int i,j,k;
    public:

        void Add() //1000
        {
            cout<<"Inside Base Class Display1\n";
        }
        virtual void Sub() //2000
        { 
                cout<<"Inside Base class Sub\n";
        }
        virtual void Mul() //3000
        {
            cout<<"Inside Base Class Mul\n";
        }
        virtual void Div() //4000
        {
            cout<<"Inside Base class Div\n";
        }


};

class Derived : public Base
{
    public:
            int a,b;

    void Sum() //5000
    {
        cout<<"Inside Sum of Derived\n";
    }
    virtual void Sub() //6000
    {
        cout<<"Inside sub of derived\n";
    }
    virtual void Div() //7000
    {
        cout<<"Inside Div of derived\n";
    }
    virtual void Mul() //8000
    {
        cout<<"Inside MUl of Derived\n";
    }

};

int main()
{
    Base *bptr = new Derived;

    bptr->Add();
    bptr->Sub();
    bptr->Mul();
    bptr->Div();

    return 0;
}