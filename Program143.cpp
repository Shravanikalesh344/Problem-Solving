//accept string in cpp and display using getline
#include<iostream> 
using namespace std;

class String
{
    private:
        char *str;
        int iSize;
    public:
        String()
        {
            iSize = 20;
            str = new char[iSize];
        }
        String(int X)
        {
            iSize = X;
            str = new char[iSize];
        }
        ~String()
        {
            delete []str;
        }

        //Logic
        void Accept()
        {
            cout<<"Enter the string :"<<endl;
            cin.getline(str,iSize);
            
        }
        void Display()
        {
            cout<<"String is :"<<str<<endl;
        }
        int CountCapital()
        {
            int iCnt = 0;
            char *temp = str;
            while(*temp != '\0')
            {
                if((*temp >= 'A')&& (*temp <= 'Z'))
                {
                    iCnt++;
                }
                temp++;
            }
            return iCnt;
        }
};

int main()
{
    String *sobj =new String(30);
    int iRet = 0;
   
    sobj->Accept();
     sobj->Display(); 

    iRet = sobj->CountCapital();

    cout<<"Capital Letters are :"<<iRet<<endl;

   


    delete sobj;
    
    return 0;
}