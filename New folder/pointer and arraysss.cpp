#include<iostream>
using namespace std;
main()
{    int i,j,*p,x[5];
    cout<<"Inputting values in array through pointer";
    cout<<endl;
    p=x;
    for(i=0;i<5;i++)
    {
    	*p=x[i];
	}
	p=&x[0];
	for(i=0;i<5;i++)
	{
		cin>>*(p+i);
	}
	
		for(i=0;i<5;i++)
	{
		cout<<*(p+i);
	cout<<endl;
	}
}

