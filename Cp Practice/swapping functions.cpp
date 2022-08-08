#include<iostream>
using namespace std;
int swap(int x,int y){
	int temp=0;
	temp=x;
	x=y;
	y=temp;
	return x;
	return y;
	
}
main()
{
int a,b;
cout<<"Enter a==";
cin>>a;
cout<<"Enter b===";
cin>>b;

cout<< swap( a, b);

}
