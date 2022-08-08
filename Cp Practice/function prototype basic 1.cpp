#include<iostream>
using namespace std;
int sum(int ,int ,int );
void g();
main()
{
		int q,w,e;
	cout<<"Enter First Number"<<endl;
	cin>>q;
	cout<<"Enter Secound Number"<<endl;
	cin>>w;
    cout<<"Enter third Number"<<endl;
    cin>>e;
    cout<<"The sum is=="<<sum(q,w,e);
    g();
    return 0;
}
void g(){
	cout<<"Hello,Good Morning";
}
	
int sum(int a,int b, int c)
{
	int z=a+b+c;
	return z;
}

