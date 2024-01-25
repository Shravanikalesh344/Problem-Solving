#include<iostream>
using namespace std;

template <class T>

T max(T no1, T no2, T no3)
{
    if((no1 > no2)&&(no1 > no3))
    {
        return no1;
    }
    else if((no2 > no1)&&(no2 > no3))
    {
        return no2;
    }
    else if((no3 > no1)&&(no3 > no2))
    {
        return no3;
    }
}

int main()
{
    int iRet = max(20,54,78);
    cout<<iRet<<"\n";

    float fRet = max(20.76,54.21,78.2);
    cout<<fRet<<"\n";

    double dRet = max(20.76121,54.2121,78.2212);
    cout<<dRet<<"\n";
}