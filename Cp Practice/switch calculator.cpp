#include<iostream>
using namespace std;
main() {
	float a,b,result;
	char op;
	float output;
while(true){
	cout<<"Enter a==";
	cin>>a;
	cout<<"Enter b==";
	cin>>b;
	cout<<"Enter operator";
	cin>>op;


	switch(op) {

		case '+':
			 result=a+b;
			cout<<"sum=="<<result;
			break;
		case '-':
			 result=a-b;
			cout<<"difference=="<<result;
			break;
		case '/':
			 result=a*b;
			cout<<"division"<<result;
			break;
		case '*':
			result =a*b;
			cout<<"product=="<<result;
			break;
		default:
			cout<<"Invalid  Operator";
	}
cout<<endl;
}}
