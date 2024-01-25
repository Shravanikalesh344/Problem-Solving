# include <iostream>

using namespace std;

class Volume
{

        public :

            int a=0;
            int volume = 0;

            Volume(int v)
            {
                a = v;
                cout<<"Enter the volume";
                cin>>v;
                
                
                volume = v * v * v;
                
                cout<<"Volume is :"<<volume<<"\n";
            }
            Volume(Volume &ref)
            {
                cout<<"Inside Copy Constructor";
                 a = ref.a;
            }

};

int main()
{
    
    Volume v1(0);
    Volume v2(v1);

    return 0;
}