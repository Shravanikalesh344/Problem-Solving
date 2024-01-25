using namespace std;

#include<iostream>

class Demo
{

     private :
        int no;

    public: 
        int i;
        int j;
   

        void fun()
        {
            cout<<"Inside fun of Demo class\n";
            no = 99;
            cout<<no<<"\n";
        }

};

int main()
{

    Demo obj1;
    Demo obj2;

   // obj1.no = 90;
    //cout<<obj1.no<<"\n";

    obj1.i = 11;
    obj1.j = 21;

    cout<<obj1.i<<"\n";

    cout<<obj1.j<<"\n";

    obj2.i = 10;
    obj2.j = 20;

    cout<<obj2.i<<"\n";
    cout<<obj2.j<<"\n";


    obj1.fun();
    obj2.fun();
    
    return 0;



//harshali 
}