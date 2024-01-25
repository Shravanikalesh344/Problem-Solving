#include<iostream>

using namespace std;

int main()
{
    int Size = 0;
    int *ptr = NULL;
    int iCnt = 0;

    cout<<"Enter number of elements :"<<"\n";
    cin>>Size;

    ptr = new int[Size];

   
    cout<<"Enter the elements in the array"<<"\n";
    for(iCnt = 0 ; iCnt < Size ; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    cout<<"Elements of array are :"<<"\n";
    for(iCnt = 0 ; iCnt < Size ; iCnt++)
    {
        cout<<ptr[iCnt]<<"\t";
    }

    cout<<"\n";

    delete []ptr;


    return 0;
}