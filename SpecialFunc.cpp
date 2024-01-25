#include<iostream>

using namespace std;

class Demo
{
    public:
        int i;
        int j;

        Demo() //Default constrour
        {
            cout<<"Inside Default Constructor\n";
            i = 0;
            j = 0;
     
        }
        Demo(int A ,int B)
        {
                cout<"Inside paramitizd constructor";
                i = A;
                j = B;
        }
        // Demo &ref = obj2
        Demo(Demo &ref)
        {
            cout<<"Inside Copuy Const";
            i = ref.i;
            j = ref.j;
        }
        ~Demo()
        {
            cout<<"Inside Destructor\n";
        }

};
int main()
{
    Demo obj1;
    Demo obj2(11,21);
    Demo obj3(obj2);

    return 0;
}