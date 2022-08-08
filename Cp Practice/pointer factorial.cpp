#include<iostream>
using namespace std;
int factorial(int a,int* p){

	for(int i=1;i<=a;i++){
			*p=1;
		*p=*p*i;
	}
	return *p;
	
}



int main()
{ 
int x,p;
cout<<"Enter x==";
cin>>x;
factorial(x,&p);

cout<<factorial( x,&p);

return 0;





}

