#include<iostream>
using namespace std;
struct Car{
	string Model;
	int year;
	int price;
	float run;
}Car;



main(){
	struct Car pegotti;
	pegotti.Model='21FX201';
	pegotti.year=2021;
	pegotti.price=120000003;
	pegotti.run=48.1;
	cout<<"The Model of Car=="<<pegotti.Model<<endl;
   cout<<"The year==="<<pegotti.year<<endl;
   cout<<"The Distance covered=="<<pegotti.run<<endl;
   cout<<"The price covered=="<<pegotti.price<<endl;
	
}
