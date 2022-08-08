#include<iostream>
using namespace std;
main()
{
	int a=3;
	int* b=&a;
	//Adress of operator
	cout<<&a<<endl;
	cout<<b;
	//Dereferecing of operator
	cout<<"the value at adress b is "<<*b<<endl;
	int** c=&b;
	cout<<**c<<endl;
	cout<<*b;
}
