#include<iostream>
using namespace std;

template <class T>

class Array
{
    public:
        T *Arr;
        int Size;

        Array(int Length);

       ~Array();
        

        void Accept();

        void Display();

        T Addition();
        
};

template <T>
Array<T> :: Array(int Length)
{
    Size = Length;
    Arr = new T[Size];
}
template <T>
Array<T>:: ~ Array()
{
    delete []Arr;
}

template <T>
void Array<T> :: Accept()
        {
          cout<<"Enter the Elements in the array"<<"\n";
          int iCnt = 0;

          for(iCnt = 0 ; iCnt < Size ; iCnt++)
          {
                cin>>Arr[iCnt];
          }  
        }

template <T>
void Array<T> :: Display()
    {
          cout<<"Elements in the array are "<<"\n";
          int iCnt = 0;

          for(iCnt = 0 ; iCnt < Size ; iCnt++)
          {
                cout<<Arr[iCnt]<<"\t";
          }  
          cout<<"\n";
        }

template <T>
int  Array<T> :: Addition()
 {
    T Sum = 0;
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < Size ; iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }
    return Sum;
 }       

int main()
{
    Array <int> obj(5);

    obj.Accept();
    obj.Display();

    int iRet = 0;
    iRet = obj.Addition();

    cout<<"Addition is :"<<iRet<<"\n";

    return 0;
}