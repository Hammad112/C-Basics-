#include<iostream>
using namespace std;
int main() {
	int i,j,z,n;
	int x[i],temp;
	cout<<"Enter no of elements";
	cin>>z;
	cout<<"Enter Array Element";
	for(i=0; i<z; i++) {
		cin>>x[i];
	}
	for(i=0; i<z; i++) {
		cout<<"XX=="<<x[i]<<endl;
	}

	for(i=0; i<z; i++) {
		for(j=i+1; j<z; j++) {
			if(x[i]<x[j]) {
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
cout<<endl;
cout<<"ASCENDING ORDER"<<endl;
for(i=0;i<z;i++)
{
	cout<<x[i]<<endl;
}

}
