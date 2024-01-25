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
    Base *bp1 = new Base; // NC
    Derieved *dp1 = new Derieved; //NC
    Base *bp2 = new Derieved; // UC
  // Derieved *dp2 = new Base; // DC
    return 0;
}