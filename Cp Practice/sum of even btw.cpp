#include<iostream>
using namespace std;
main()
{
	int n,x,i,R;
	cout<<"Enter the value of x && n";
	cin>>x>>n;
	for(i=x;i<=n;i++)
	{
	if(i%2==0){
		R+=i;
	}	
	}
	cout<<R;
}
