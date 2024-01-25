#include<iostream>
using namespace std;

template <class T>
T max(T *arr , int iSize)
{
    int i = 0;
    T max = arr[i];

    for(i = 0 ; i< iSize ; i++)
    {
        if(arr[i] >= max)
        {
            max = arr[i];
        }
    }
    return max;

}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0 , 3.7 , 9.8 , 8.7};

    int iRet = max(arr,5);
    cout<<iRet<<"\n";

    float fRet = max(brr,4);
    cout<<fRet<<"\n";
}