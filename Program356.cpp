#include<iostream>

using namespace std;

int Addition(int No1 , int No2)
{
    int iAns = 0;
    iAns = No1 + No2;
    return iAns;
}

int main()
{

    int iValue1 = 10 , iValue2 =11 , iRet  =0;

    iRet = Addition(iValue1,iValue2);

    cout<<"Addition is "<<iRet<<"\n";
    return 0;

}