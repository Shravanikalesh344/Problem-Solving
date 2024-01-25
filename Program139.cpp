//accept string in cpp and display using gets
#include<iostream> 
using namespace std;

class String
{
    private:
        char *str;
    public:
        String()
        {
            str = new char[20];
        }
        String(int iSize)
        {
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
            gets(str);
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