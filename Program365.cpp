#include<iostream>

using namespace std;

class Arithmatic
{
    public:
      int No1;
      int No2;

      Arithmatic(int A , int B)
      {
        this->No1 = A;
        this->No2 = B;
      }

      int Addition()
      {
        int Ans = 0;
        Ans = No1 + No2;
        return Ans;
      }

      int Substration()
      {
        int Ans = 0;
      }

};

int main()
{
    Arithmatic aobj1(11,10);

    int Ret = 0;
    Ret = aobj1.Addition();
    cout<<"Addition is :"<<Ret<<"\n";
    
    return 0;
}