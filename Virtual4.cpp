#include<iostream>

using namespace std;

class Base
{
    public:
        int i,j,k;
       virtual  void Fun() //1000 
        {
            cout<<"Inside Base Fun\n";
        }
       virtual void Gun() // 2000   
        {
             cout<<"Inside Base Gun\n";
        }
        void Sun() //3000
        {
             cout<<"Inside Base Sun\n";
        }
        void Run() //4000
        {
             cout<<"Inside Base Run\n";
        }

};

class Derieved : public Base
{
    int a,b;
    virtual void Gun()  //5000      //use of virtual keyword is optional in derived class
    {
        cout<<"Inside Derived Gun\n";
    }
     void Run() // 6000
    {
        cout<<"Inside Derived Run\n";
    }
    virtual void Mun() // 7000
    {
        cout<<"Inside Derived Mun\n";
    }


};

int main()
{
    
    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derieved)<<"\n";
    Base *bp = new Derieved;  // UC

    bp->Fun();
    bp->Gun();
    bp->Sun();
    bp->Run();

  //  bp->MUn();  error 
 
    return 0;
}