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
            str = new char[20];
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
};

int main()
{
    String sobj(30);
    sobj.Accept();
    sobj.Display();
    
    return 0;
}