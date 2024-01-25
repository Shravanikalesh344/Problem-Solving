#include<iostream>
using namespace std;

class Array
{
    protected:
        int *Arr;
        int size;

    public:
        Array(int Value = 10)
        {
            cout<<"Inside Constructor\n";
            this->size = Value;
            this->Arr = new int[size];
        }

        Array(Array &ref)
        {
            cout<<"Inside Copy Constructor\n";
            this->size = ref.size;
            this->Arr =new int[this->size];

            for(int i = 0;  i < size ; i++)
            {
                this->Arr[i]= ref.Arr[i];
            }
        }
        ~Array()
        {
            cout<<"Inside Destructor";

            delete []Arr;
        }

        inline void Accept();
        inline void Display();

};

void Array :: Accept()
{
    cout<<" Please Enter the values :\n";

    for(int i = 0 ; i < this->size ; i++)
    {
        cin>>Arr[i];
    }
}

void Array :: Display()
{
    cout<<"Array is :\n";

    for(int i = 0 ; i < this->size ; i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<"\n";
}


class ArrSearch : public Array
{
    public:
        ArrSearch(int no = 10):Array(no)
        {}

        int Frequency(int);
        int SearchFirst(int);
        int SearchLast(int);
        int EvenCount();
        int OddCount();
        int SumAll();

};

int ArrSearch ::  SearchFirst(int value)
{
    int i = 0;

    for(i = 0 ; i < size ;i++)
    {
        if(Arr[i]== value)
        {
            break;
        }
    }
    if(i == size)
    {
        return -1;
    }
    else
    {
        return i+1;
    }
}

int ArrSearch :: Frequency(int value)
{
    int iCnt  = 0;

    for(int i = 0 ; i <size ; i++)
    {
        if(Arr[i]== value)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int ArrSearch :: SearchLast(int value)
{
    int temp = 0;
    for(int i = 0 ; i < size ; i++)
    {
         if(Arr[i] == value)
         {
             temp = i;
         }
    }
    return temp;
}

int ArrSearch :: EvenCount()
{
    int iCnt  = 0;
    for(int i = 0 ; i <size ; i++)
    {
        if((Arr[i]% 2)==0)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int ArrSearch :: OddCount()
{
    int iCnt = 0;

    for(int i = 0 ; i <size ; i++)
    {
        if((Arr[i]% 2)!=0)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int ArrSearch :: SumAll()
{
    int iSum = 0;

    for(int i = 0 ; i <size ; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}
int main()
{
    cout<<"Inside Main\n";
    int iRet = 0;

    ArrSearch sobj1(6);

    sobj1.Accept();
    sobj1.Display();

    iRet = sobj1.Frequency(11);
    cout<<"Frequency is :"<<iRet<<"\n";

    iRet = sobj1.SearchFirst(11);
    cout<<"Firest occurance is "<<iRet<<"\n";

    iRet = sobj1.SearchLast(11);
    cout<<"Last occurance is "<<iRet<<"\n";

    iRet = sobj1.EvenCount();
    cout<<"Even Count  is "<<iRet<<"\n";

    iRet = sobj1.OddCount();
    cout<<"Odd Count  is "<<iRet<<"\n";

    iRet = sobj1.SumAll();
    cout<<"Sum  is: "<<iRet<<"\n";

    return 0;
}