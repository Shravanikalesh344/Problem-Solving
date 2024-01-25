#include<iostream>

using namespace std;


class Array
{
    private:
        int *Arr;
        int iLength;
    
    public:
        Array(int Size)
        {
            iLength = Size;
            Arr = new int[iLength];

        }
        ~Array()
        {
            delete []Arr;
        }
        void Accept()
        {
            int iCnt = 0;
            cout<<"Enter elements :"<<"\n";
            for(iCnt = 0 ; iCnt < iLength ; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

         void Display()
        {
            int iCnt = 0;
            cout<<" elements  are :"<<"\n";
            for(iCnt = 0 ; iCnt < iLength ; iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
            cout<<"\n";
        }

};

int main()
{
    Array aobj(5);

    aobj.Accept();
    aobj.Display();
   
    return 0;
}