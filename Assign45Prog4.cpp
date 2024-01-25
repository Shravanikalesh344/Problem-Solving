#include<iostream>
using namespace std;

template <class T>

int SearchLast(T *arr , int iSize , T No)
{
    int iCnt = 0;
    int Temp  =0;
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(arr[iCnt] == No)
        {
            Temp = iCnt;
        }
    }
    return Temp;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = SearchLast(arr,9,40);
    cout<<iRet<<"\n";


    return 0;
}