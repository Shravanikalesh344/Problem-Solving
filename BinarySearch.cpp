#include<iostream>
using namespace std;

class Array
{
    private:
        int * Arr;
        int iSize;

    public:
        Array(int X)        // Parametrised Constructor
        {
            iSize = X;
            Arr = new int[iSize];
        }

        ~Array()            // Destructor
        {   
            delete []Arr;
        }

        void Accept()       // Member function
        {
            int iCnt = 0;
            cout<<"Please enter the elements : "<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()      // Member function
        {
            cout<<"Elements of the array are : "<<endl;
            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<endl;
        }
        // Logics
        //Array should be sorted
        bool BinarySearch(int iNo)
        {
            bool bFlag = false;
            int iStart = 0 ,iEnd = 0 , iMid = 0;

            iStart = 0;
            iEnd = iSize-1;

            while(iStart <= iEnd)
            {
                iMid = iStart + (iEnd-iStart)/2;

                if(Arr[iMid] == iNo)
                {
                    bFlag = true;
                    break;
                }
                else if(Arr[iMid] < iNo)
                {
                    iStart = iMid + 1;
                }
                else if(Arr[iMid] > iNo)
                {
                    iEnd = iMid - 1;
                }
            }
            return bFlag;
        }

};  // End of class

int main()
{
    int iLength = 0;
    int iRet = 0;
    bool bRet = false;
    int iNo = 0;


    cout<<"Enter the number of elements: "<<endl;
    cin>>iLength;

    Array *aobj = new Array(iLength);

    aobj->Accept();
    aobj->Display();

    cout<<"Enter A Number to Search :\n";
    cin>>iNo;

    bRet = aobj->BinarySearch(iNo);

     if(bRet == true)
    {
        cout<<"Element Found"<<"\n";
    }
    else 
    {
        cout<<"Element Not Found"<<"\n";
    }



    delete aobj;

    return 0;
}