#include<iostream>
#include<math.h>
using namespace std;
int arr[3];
int det(int a,int b,int c) {
	int discriminent;
	discriminent=b*b-4*a*c;
	return discriminent;
}
int roots(int y)
{
	
}
int main() {
	int arr[3];
	cout<<"Enter the value of x==";
	cin>>arr[0];
	cout<<"Enter the value of y==";
	cin>>arr[1];
	cout<<"Enter the value of z==";
	cin>>arr[2];
	cout<<"Discriminent=="<<det(arr[0],arr[1],arr[2])<<endl;

	
}

