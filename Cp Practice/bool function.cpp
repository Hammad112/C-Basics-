#include<iostream>
using namespace std;
bool multiple(int x,int y )
{
	if(x%y==0)
	{ return true;
	}
	else
	{
		return false;
	}
	
}
main()
{
	int a,b;
	bool multiple(int a,int b);
	cout<<"enter value of a==";
	cin>>a;
	cout<<"Enter value of b==";
	cin>>b;
	bool result=multiple(a,b);
	if(result==true)
	{
		cout<<"Multiple";
		
	}
	else{
		cout<<"Not Multiple";
	}
	
}
