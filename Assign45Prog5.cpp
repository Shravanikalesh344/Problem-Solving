#include<iostream>
using namespace std;

template <class T>

void Reverse(T *arr , int iSize)
{
    int iCnt = 0;
    for(iCnt = iSize ; iCnt >= 0 ; iCnt--)
    {
        cout<<arr[iCnt]<<"\n";
    }
}

int main()
{
    int arr[] = {10,20,30,40,50,60,70,80};
     Reverse(arr,8);

    return 0;
}