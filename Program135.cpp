//Accept and display array  dynamic for pattern printing template
#include<iostream>
using namespace std;

class Pattern
{
    private:
        int iRow;
        int iCol;
    
    public:
        Pattern(int X , int Y)
        {
            iRow = X;
            iCol = Y;
        }

        void Display()
        {
           
        }

}; 

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    cout<<"Enter Number of rows :"<<endl;
    cin>>iValue1;

    cout<<"enter Number of columns :"<<endl;
    cin>>iValue2;

    Pattern pobj(iValue1 , iValue2)

    pobj.Display();

 


    return 0;
}
