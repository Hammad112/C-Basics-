#include<iostream>
using namespace std;
int fact(int a){
	int temp=1;
	for(int i=1;i<=a;i++){
		temp=temp*i;
	}
	return temp;
}
main()
{
int x;
cout<<"Enter number whose factorial to be found==";
cin>>x;
fact(x);
cout<<fact(x);
}

