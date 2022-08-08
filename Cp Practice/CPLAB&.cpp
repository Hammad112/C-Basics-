#include<iostream>
#include<math.h>
using namespace std;
int arr[3];
int det(int a,int b,int c) {
	int y;
	y=b*b-4*a*c;
	return y;
}

int roots(int y) {
	if(y==0) {
		int r,r1,r2;
		r=r1 = r2 = -arr[1]/(2*arr[0]);
		cout<<endl;
		return r;
	}
   else	if(y>0) {
		int r1, r2;
		r1 = (-arr[1] + sqrt(y)) / (2*arr[0]);
		cout<<endl ;
		r2 = (-arr[1] - sqrt(y)) / (2*arr[0]);
		cout<<endl;
		return r1;
		return r2;
	}
	else{
		int real,imag;
		real = -arr[1]/(2*arr[0]);
		cout<<endl;
		int img=sqrt(-y)/(2*arr[0]);
		cout<<endl;

		return imag;
		return real;
	}

}
int main() {
	int y;
	int arr[3];
	cout<<"Enter the value of x==";
	cin>>arr[0];
	cout<<"Enter the value of y==";
	cin>>arr[1];
	cout<<"Enter the value of z==";
	cin>>arr[2];
	cout<<"Discriminent=="<<det(arr[0],arr[1],arr[2])<<endl;

	cout<<roots(y);
}

