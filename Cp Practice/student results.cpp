#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	struct result{
		string name[14];
		int sub[4];             
		int RegNo;
		char grade;
		};
		result student[4]={
		                {"Hammad",{89,90,76,50},2041,'A'},
	                   	{"Hassan" ,{35,46,50,32},2021,'B'},
		                {"Ali" ,{45,56,90,98},2002,'A1'},
	                 	{"Hassan" ,{34,35,65,78},2001,'F'}
						 };
	                 
					 	for(int i=0;i<=4;i++)
	                 	{
	                 		cout<<student[i].name<<endl;
	                 		
	                 		for(int j=0;j<4;j++)
	                 		{ 
							 cout<<student[i].sub[j]<<endl;
	                 		cout<<student[i].RegNo<<endl;
	                 		cout<<student[i].grade<<endl;
							 }
						 }
						 return 0;
}

