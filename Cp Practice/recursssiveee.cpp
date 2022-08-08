#include<iostream>
using namespace std;
int sum(int a) {
	if(a!=10) {
		return a+sum(a-1);
	}
}
main() {
	int x;
	cout<<"Enter Value of x===";
	cin>>x;
		cout<<"Sum=="<<sum(x);
}
