#include<iostream>
using namespace std;
 swap(int a,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	return a;
	return b;
}
main() {
	int x;
	int y;
	cout<<"Enter value of x==";
	cin>>x;
	cout<<"Enter value of y==";
	cin>>y;

    cout<<swap(x,y);

}

