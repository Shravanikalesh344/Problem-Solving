#include<iostream>
using namespace std;

class Array
{
    public:
        int *Arr;
        int Size;

        Array(int Length)
        {
            this.Size = Length;
            Arr = new int[Size];
        }

      ~Array()
        {
            delete []Arr;
        }

        void Accept()
        {
          cout<<"Enter the Elements in the array"<<"\n";
          int iCnt = 0;

          for(iCnt = 0 ; iCnt < Size ; iCnt++)
          {
                cin>>Arr[iCnt];
          }  
        }

        void Display()
        {
          cout<<"Elements in the array are "<<"\n";
          int iCnt = 0;

          for(iCnt = 0 ; iCnt < Size ; iCnt++)
          {
                cout<<Arr[iCnt]<<"\t";
          }  
          cout<<"\n";
        }

        
};

int main()
{
    Array obj(5);

    obj.Accept();
    obj.Display();

    return 0;
}