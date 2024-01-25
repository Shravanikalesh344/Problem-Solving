#include<iostream>

using namespace std;

class Demo
{
    public:
        int i;
        int j ;
         int k ;

        Demo(int a , int b , int c)
        {
            i = a;
            j = b;
            k = c;
        }

        void fun()// const
        {
            i++;
            j++;
            k++;
        }
        void gun(int x , const int y) const
        {
            int no1 = 10;
            const int no2 = 20;

            x++;
           // y++;
            no1++;
           // no2++;
          //  i++;
            //j++;
            //k++;
        }

};

int main()
{
    Demo obj(11,21,51);

    cout<<"Value of i"<<obj.i<<"\n";
    cout<<"Value of j"<<obj.j<<"\n";
    cout<<"Value of k"<<obj.k<<"\n";

    obj.fun();
    obj.gun(51,101);

    const Demo obj2(22,23,24);

    cout<<"Value of i"<<obj2.i<<"\n";
    cout<<"Value of j"<<obj2.j<<"\n";
    cout<<"Value of k"<<obj2.k<<"\n";



   // obj2.fun(); constant object can only call constant functions 
    obj2.gun(51,101);

    return 0;
}