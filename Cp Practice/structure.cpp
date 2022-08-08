#include<iostream>
using namespace std;
typedef struct employee
{
	int EID;
	char favChar;
	float Salary;
}employee;

main()
{  struct employee Hammad;
   
   Hammad.favChar='A';
   Hammad.Salary=120000000;
   cout<<"The Favourite Character"<<Hammad.favChar<<endl;
   cout<<"The value is"<<Hammad.EID<<endl;
   cout<<"The Salary"<<Hammad.Salary<<endl;
   return 0;


}
