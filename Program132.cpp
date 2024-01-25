//Accept and display array 
#include<iostream>
using namespace std;

class Array
{
    private:
        int * Arr;        //int *Arr;
        int iSize;

    public:
        Array(int X)   //parametrixed constructor
        {
            iSize = X;
            Arr = new int[iSize];

        }
        ~Array()    //Destructor
        {
            delete []Arr;
        }

        void Accept()   //Member function
        {
            int iCnt = 0;
            cout<<"Please Enter the elements :"<<endl;
            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        void Display()      // member func
        {
            int iCnt = 0;
            cout<<"Elements of array are :"<<endl;

            for(iCnt  = 0 ; iCnt< iSize ; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<endl;
        }
        //logics :


}; //end of class

int main()
{
    int iLength = 0;

    cout<<"Enter the number of elements that you want to store :"<<endl;
    cin>>iLength;

    Array aobj(iLength);

    aobj.Accept();
    aobj.Display();


    return 0;
}
