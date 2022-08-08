#include<iostream>
using namespace std;
main()
{
	int a,b,c,max;
	cout<<"User bsdk ente a==";
	cin>>a;
	cout<<"SDK enter b==";
	cin>>b;
	cout<<"Enter c";
	cin>>c;
	cout<<endl;
	max=(a>b)? a:b;
	int tmax=(max>c)? max:c;
	cout<<tmax;
}
