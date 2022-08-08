#include<iostream>
using namespace std;
main()
{
	int x[5],i,j,*p;
	cout<<"Using pointer  inputting Elements in a array";
	cout<<endl;
	p=x;
	for(i=0;i<5;i++)
	{
		*p=x[i];
	}
	p=&x[0];
	cout<<endl;
	for(i=0;i<5;i++)
	{
		
			cin>>*(p+i);
		
	}
		for(i=0;i<5;i++)
	{
		
			cout<<"ARRAY "<<i<<*(p+i)<<endl;
		
	}
	cout<<"Sorting";
	
		for(i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(x[i]>x[j])
			{
				int temp=0;
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
				
			}
	}
	}
	for(i=0;i<5;i++)
	{
		cout<<x[i]<<endl;
	}
	






}

