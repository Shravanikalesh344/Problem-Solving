#include<iostream>

using namespace std;

class Arithmatic
{
    public:
      int No1;
      int No2;

      Arithmatic(int A , int B);
      int Addition( );
      int Substration();
      int Multiplication();
      int Division();

};

Arithmatic :: Arithmatic(int A , int B)
{
        this->No1 = A;
        this->No2 = B;
}


int Arithmatic :: Addition()
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int Arithmatic :: Substration()
{
    int Ans = 0;
    Ans = No1 - No2;
    return Ans;
}

int Arithmatic :: Multiplication()
{
    int Ans = 0;
    Ans = No1 * No2;
    return Ans;
}

int Arithmatic :: Division()
{
    int Ans = 0;
    Ans = No1 / No2;
    return Ans;
}

int main()
{
    Arithmatic aobj1(11,10);

    int Ret = 0;
    Ret = aobj1.Addition();
    cout<<"Addition is :"<<Ret<<"\n";

    Ret = aobj1.Addition();
    cout<<"Substraction is :"<<Ret<<"\n";

    Ret = aobj1.Multiplication();
    cout<<"MUltiplication is :"<<Ret<<"\n";

    Ret = aobj1.Division();
    cout<<"Division is :"<<Ret<<"\n";


    
    return 0;
}