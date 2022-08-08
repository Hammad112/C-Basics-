#include<iostream>
using namespace std;
main()
{
	int b,a,sum;
	cout<<"Enter value of x==";
	cin>>a;
	cout<<"Enter value of y==";
	cin>>b;
	sum=a+b;
	a=sum-a;
	b=sum-b;
	cout<<"a=="<<a<<endl;
	cout<<"b=="<<b<<endl;
	
}
