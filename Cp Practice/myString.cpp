#include<iostream>
#include<string>
using namespace std;

int main()
{
    int myVar=10;
    string Var1="I am Learning Programming";
    cout<<"String 1="<<Var1<<endl;

    cout<<"The Size of String 1 is "<<Var1.size()<<endl;

    string Var2;
    cout<<"String 2=";
    getline(cin, Var2);
    cout<<"You Entered="<<Var2<<endl;

    string Var3;
    cout<<"String 3=";
    cin>>Var3;
    cout<<"You Entered="<<Var3<<endl;


    string Var4;
    cout<<"String 4 is assigned String1="<<Var4.assign(Var1);

    Var2.swap(Var1);
    cout<<"\nString 2 is swaped with String1::STRING2="<<Var2<<endl;
    cout<<"String 2 is swaped with String1::STRING1="<<Var1<<endl;

    return 0;
}


