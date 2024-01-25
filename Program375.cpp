#include<iostream>
using namespace std;

class Array
{
    public:
        int *Arr;
        int Size;

        Array(int Length);

       ~Array();
        

        void Accept();

        void Display();

        int Addition();
        
};

 Array :: Array(int Length)
{
       Size = Length;
      Arr = new int[Size];
        }

  Array:: ~ Array()
        {
            delete []Arr;
        }

 void Array :: Accept()
        {
          cout<<"Enter the Elements in the array"<<"\n";
          int iCnt = 0;

          for(iCnt = 0 ; iCnt < Size ; iCnt++)
          {
                cin>>Arr[iCnt];
          }  
        }

void Array :: Display()
    {
          cout<<"Elements in the array are "<<"\n";
          int iCnt = 0;

          for(iCnt = 0 ; iCnt < Size ; iCnt++)
          {
                cout<<Arr[iCnt]<<"\t";
          }  
          cout<<"\n";
        }

 int  Array :: Addition()
 {
    int Sum = 0;
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < Size ; iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }
    return Sum;
 }       

int main()
{
    Array obj(5);

    obj.Accept();
    obj.Display();

    int iRet = 0;
    iRet = obj.Addition();

    cout<<"Addition is :"<<iRet<<"\n";

    return 0;
}