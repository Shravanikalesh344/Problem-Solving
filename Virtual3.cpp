#include<iostream>

using namespace std;

class Base
{
    public:
        int i,j,k;
        void Fun() // DEfintion
        {
            cout<<"Inside Base Fun\n";
        }
         void Gun()
        {
             cout<<"Inside Base Gun\n";
        }
        void Sun()
        {
             cout<<"Inside Base Sun\n";
        }
        void Run()
        {
             cout<<"Inside Base Run\n";
        }

};

class Derieved : public Base
{
    int a,b;
    void Gun()  // Redefinittion
    {
        cout<<"Inside Derived Gun\n";
    }
     void Run() // REdefinition
    {
        cout<<"Inside Derived Run\n";
    }

};

int main()
{
    
    Base *bp = new Derieved;  // UC

    bp->Fun();
    bp->Gun();
    bp->Sun();
    bp->Run();
 
    return 0;
}