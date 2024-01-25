#include<iostream>

using namespace std;

class Demo
{
    public:
        int x,y;

        Demo()
        {
            cout<<"Inside Default Constructor\n";
            x = 10;
            y = 20;
        }
        ~Demo()
        {
            cout<<"Inside Demo Destructor\n";
        }
        void Fun()
        {
            cout<<"Inside Fun Of Demo\n";
        }

};
// class Hello extends Demo (java)
class Hello : public Demo
{
    public:
        int a,b,c;
        Hello()
        {
            cout<<"Inside Hello Constructor\n";
            a = 30;
            b = 40;
            c = 50;
        }
        ~Hello()
        {
            cout<<"Inside Hello Destructor\n";
        }
        void gun()
        {
            cout<<"Inside gun of Hello\n";
        }

};
class Marvellous : public Hello
{
    public:
        int p;

        Marvellous()
        {
            cout<<"Inside constructor of marvellous\n";
            p = 60;
        }
        ~Marvellous()
        {
            cout<<"Inside Destructor of Marvellous\n";
        }
        void Sun()
        {
            cout<<"Inside Sun of Marvellous\n";
        }

};
int main()
{
    Marvellous mobj;

    cout<<sizeof(mobj)<<" bytes \n";

    cout<<mobj.x<<"\n";
    cout<<mobj.y<<"\n";
    cout<<mobj.a<<"\n";
    cout<<mobj.b<<"\n";
    cout<<mobj.c<<"\n";
    cout<<mobj.p<<"\n";

    mobj.Fun();
    mobj.gun();
    mobj.Sun();





    return 0;
}