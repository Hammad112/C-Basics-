#include<iostream>
using namespace std;

int main()
{
    int myTable=2;

    //cout<<"Enter Table Value=";
    //cin>>myTable;

    int myCount;

        for(myCount=0;myCount<11;myCount++) //inner loop
        {
            cout<<myTable<<"x"<<myCount<<"="<<myTable*myCount<<endl;
            //cout<<"   ";
        }

    return 0;
}
