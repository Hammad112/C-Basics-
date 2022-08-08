#include<iostream>
using namespace std;
struct dramas {
	string name;
	int year;
	int viewers;
	int r;
};
void display(dramas x[3]);
main() {
	dramas x[3];
	int i;
	for(int i=0; i<3; i++) {

		cout<<"Enter drama Name=";
		getline(cin,x[i].name);
		cout<<"Enter Releasing year="<<endl;
		cin>>x[i].year;
		cout<<"Enter Number of viewers="<<endl;
		cin>>x[i].viewers;
		cout<<"Enter Rating=="<<endl;
		cin>>x[i].r;
		cout<<endl;
	}
	display( x);

}
void display(dramas x[3]) {
	for(int i=0; i<3; i++) {

		cout<<"Drama name=="<<x[i].name<<endl;
		cout<<"Releasing year=="<<x[i].year<<endl;
		cout<<"Viewers=="<<x[i].viewers<<endl;
		cout<<"rating=="<<x[i].r;
	}
}

