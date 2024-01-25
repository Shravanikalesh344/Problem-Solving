#include<iostream>

using namespace std;

float Addition(float No1 , float No2)
{
    float iAns = 0.0;
    iAns = No1 + No2;
    return iAns;
}

int main()
{

    float iValue1 = 10 , iValue2 =11 , iRet  =0;

    iRet = Addition(iValue1,iValue2);

    cout<<"Addition is "<<iRet<<"\n";
    return 0;

}