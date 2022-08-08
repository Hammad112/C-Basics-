#include<iostream>
using namespace std;

int max(int a,int b,int c,int d) {
	cout<<"Maxima"<<endl;
	if(a>b && a>c && a>d ) {
		return a;
	}
	if(b>a && b>c && b>d ) {
		return b;
	}
	if(c>b && c>a && c>d ) {
		return c;
	}
	if(d>b && d>c && a<d ) {
		return d;
	}
}
int min(int a,int b,int c,int d) {
	cout<<"Minima"<<endl;
	if(a<b && a<c && a<d ) {
		return a;
	}
	if(b<a && b<c && b<d ) {
		return b ;
	}
	if(c<b && c<a && c<d ) {
		return c;
	}
	if(d<a && d<c && d<b ) {
		return d;
	}
}
int main() {
	int numb1,numb2,numb3,numb4;
	cout<<"User to Enter 1st Number==";
	cin>>numb1;
	cout<<"User to Enter 2nd NUmber==";
	cin>>numb2;
	cout<<"User to Enter 3rd NUmber==";
	cin>>numb3;
	cout<<"User to Enter 4th NUmber==";
	cin>>numb4;
	cout<<"Maximum"<<max(numb1,numb2,numb3,numb4);
	cout<<endl;
	cout<<"Minimum"<<min(numb1,numb2,numb3,numb4);

}
