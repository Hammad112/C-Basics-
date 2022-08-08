#include<iostream>
using namespace std;
int sum(int x,int y,int z)
{
	int a=z+y+x;
	return a;
}


main(){
	int q,w,e;
	cout<<"Enter First Number"<<endl;
	cin>>q;
	cout<<"Enter Secound Number"<<endl;
	cin>>w;
cout<<"Enter third Number"<<endl;
cin>>e;
cout<<"The sum is=="<<sum(q,w,e);
}
