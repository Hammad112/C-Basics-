#include<iostream>
using namespace std;
main() {
	int choice ,total;
	int cofee,coke, juice,Tea;
	cout<<"Tall Surwey on Beverages"<<endl;
	do {
		cout<<"User to Enter Choice b/w 1-4==";
		cin>>choice;
		switch(choice) {
			case '1':
				cofee++;
				break;
			case '2':
				Tea++;
				break;
			case '3':
				coke++;
				break;
			case '4':
				juice++;
				break;
		}
		total;
	} while( choice!=-1 && total>0);
	{
		cout<<"Total vote=="<<total<<endl;
		cout<<"Tea=="<<Tea<<endl;
		cout<<"Cofee=="<<cofee<<endl;
		cout<<"coke=="<<coke<<endl;
		cout<<"orange juice=="<<juice<<endl;
	}
}
