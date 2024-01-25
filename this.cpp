#include<iostream>

using namespace std;

class Demo
{
    public:
        int i;
        int j;
        int k;

        //Demo(Demo *this , int a = 10 , int b = 20,int c =30)

        Demo(int a = 10,int b = 20,int c = 30)
        {
            cout<<"Value of this is :"<<this<<"\n";
            this->i = a;
            this->j = b;
            this->k = c;
            this->Display();
            //this->Fun(a,b);
        }
        
        //void Fun(Demo *this,int no1,int no2);

        void Fun(int no1 , int no2)
        {
            cout<<"Insdie Fun\n";
            cout<<"Value of i"<<this->i<<"\n";
            cout<<"Value of j"<<this->j<<"\n";
        }
        // void display(Demo *this)
        void Display()
        {
            cout<<"Inside display\n";
            cout<<"Value of this pointer is :"<<this<<"\n";
            //cout<<this->i;
        }


};

int main()
{
    Demo obj1; //Demo(&obj1)
    Demo obj2(11,21,51); //Demo(&obj2)

    cout<<"Address of obj1 is"<<&obj1<<"\n";
    obj1.Fun(5,6); //Fun(&obj1,5,6);
                 // Fun(100,5,6);

    cout<<"Address of obj2 is"<<&obj2<<"\n";
    obj2.Fun(8,9); //Fun(&obj2,8,9);
                //Fun(200,8,9);

    cout<<"Address of obj1 is"<<&obj1<<"\n";
    obj1.Display(); //Display(&obj1);

    cout<<"Address of obj2 is"<<&obj2<<"\n";
    obj2.Display();

    


    return 0;
}