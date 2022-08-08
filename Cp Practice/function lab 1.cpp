#include<iostream>
using namespace std;




void funct(int subj1,int subj2,int subj3);
int main()
{
	int marks,subj1,subj2,subj3;
	float TNo;
	string Rno;
		cout<<"Enter Total Number";
	cin>>TNo;
	cout<<"Enter your marks"<<endl;
	cin>>marks;
	cout<<"Enter your Registration Number"<<endl;
	cin>>Rno;
	cout<<"Enter No of 1st Subject";
	cin>>subj1;
		cout<<"Enter No of 2nd Subject";
	cin>>subj2;
		cout<<"Enter No of 3rd Subject";
	cin>>subj3;
funct( subj1, subj2 , subj3);
	
}



void funct(int subj1,int subj2,int subj3){
	string Rno;
	char grade;
	float TNo;
	float avg=(subj1+subj2+subj3)/3;
	float per=(avg/TNo)*100;
	if (per>=80)
	{
		grade=='A';
		cout<<grade;
	}
	else if(per>=70 &&per<=79)
	{
		
		grade=='B';
		cout<<grade;
	}
	else if(per<70)
	{
		grade=='Fail';
		cout<<grade;
	}
	cout<<endl;
	cout<<"Hammad Nasir";
	cout<<"Registration No=="<<Rno;
	cout<<"Grade =="<<grade;
	
}
