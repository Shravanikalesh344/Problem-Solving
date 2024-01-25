#include<iostream>
using namespace std;

template <class T>

int SearchFirst(T *arr , int iSize , T No)
{
    int iCnt = 0;
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(arr[iCnt] == No)
        {
            break;
        }
    }
    return iCnt;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = SearchFirst(arr,9,40);
    cout<<iRet<<"\n";


    return 0;
}