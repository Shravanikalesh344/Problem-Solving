#include<iostream>
using namespace std;

template <class T>
T min(T *arr , int iSize)
{
    int i = 0;
    T min = arr[i];

    for(i = 0 ; i< iSize ; i++)
    {
        if(arr[i] <= min)
        {
            min = arr[i];
        }
    }
    return min;

}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0 , 3.7 , 9.8 , 8.7};

    int iRet = min(arr,5);
    cout<<iRet<<"\n";

    float fRet = min(brr,4);
    cout<<fRet<<"\n";
}