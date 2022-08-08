#include<iostream>
using namespace std;
main()
{
	int table,x,i;
	cout<<"x";
	cin>>x;
	for(i=1;i<=10;i++)
	{
		table=x*i;
		cout<<"x"<<"*"<<i<<"=="<<table<<"\t";
		if(i==5)
		{
			cout<<endl;
		}
	}
	
}
