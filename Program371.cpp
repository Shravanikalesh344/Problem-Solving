#include<iostream>

using namespace std;

int Addition(int Arr[],int Length)
{
    int Sum = 0 , iCnt = 0;

    for(iCnt = 0 ; iCnt < Length ; iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }
    return Sum;

}

int main()
{
    int Size = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    cout<<"Enter number of elements :"<<"\n";
    cin>>Size;

    ptr = new int[Size];

   
    cout<<"Enter the elements in the array"<<"\n";
    for(iCnt = 0 ; iCnt < Size ; iCnt++)
    {
        cin>>ptr[iCnt];
    }

   iRet = Addition(ptr, Size);
   cout<<"Addition of elements is :"<<iRet<<"\n";


    cout<<"\n";

    delete []ptr;


    return 0;
}