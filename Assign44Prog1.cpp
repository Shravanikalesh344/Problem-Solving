#include<iostream>
using namespace std;

template <class T>

T Multiply(T no1 , T no2)
{
    T ans;
    ans = no1 * no2;
    return ans;
}

int main()
{
    int iRet = Multiply(10,20);
    cout<<iRet<<"\n";

    float fRet = Multiply(10.5f , 20.5f);
    cout<<fRet<<"\n";

    double dRet = Multiply(18.999 , 43.787);
    cout<<dRet<<"\n";

    return 0;
}