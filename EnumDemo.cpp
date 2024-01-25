#include<iostream>
using namespace std;

int main()
{
    enum days {Sunday , Monday , Tuesday, Wednesday};

    cout<<Sunday<<"\n";
    cout<<Monday<<"\n";

    enum Months {January = 10 , Feburary = 20 , March};
    
    cout<<January<<"\n";
    cout<<Feburary<<"\n";
    cout<<March<<"\n";
    
    return 0;

}