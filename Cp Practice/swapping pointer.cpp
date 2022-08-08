#include<iostream>
using namespace std;
int swap(int*x,int*y){
	int temp=0;
	temp=*x;
	*x=*y;
	*y=temp;
}




main()
{
	int a,b,*p;
	cout<<"x==";
	cin>>a;
	cout<<"y===";
	cin>>b;
	
	swap(&a,&b);
	cout<<swap(&a,&b);
}
