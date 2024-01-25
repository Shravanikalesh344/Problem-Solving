#include<iostream>

using namespace std;

class Base
{
    public:
        int i,j,k;
        void Fun()
        {
            cout<<"Inside Base Fun\n";
        }

};

class Derieved : public Base
{
    int a,b;
    void Gun()
    {
        cout<<"Inside Derived Gun\n";
    }
};

int main()
{
    Base bobj;
    Derieved dobj;

    bobj.Fun();
    dobj.Fun();
    dobj.Gun();

    cout<<sizeof(bobj)<<"\n";
    cout<<sizeof(dobj)<<"\n";
    return 0;
}