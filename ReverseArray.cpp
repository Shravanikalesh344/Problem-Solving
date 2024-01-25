#include<iostream>
using namespace std;

class Array
{
    public:

        void Reverse(int iSize , int arr[])
        {
            int iCnt = 0;
            for(iCnt = iSize ; iCnt >= 0; iCnt--)
            {
                cout<<arr[iCnt]<<"\t";
            }
        }
};

int main()
{
    int iNo = 0;
    int *ptr = NULL;
    int iCnt = 0;

    cout<<"How Many Elements do you want ?"<<"\n";
    cin>>iNo;

    ptr = new int[iNo];
    int Arr[iNo];

    cout<<"Enter the elements in the array :"<<"\n";
    for(iCnt = 0 ;iCnt < iNo ; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    Array aobj;

    aobj.Reverse(iNo,Arr);
}