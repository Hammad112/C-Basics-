#include<iostream>
using namespace std;
int swap(int *a,int *b);
main()
{  int x,y,*p;
cout<<"Enter value of x==";
cin>>x;
cout<<"Enter value of y==";
cin>>y;
cout<<"Before swapping"<<endl;
cout<<"x=="<<x<<endl;
cout<<"y=="<<y<<endl;
cout<<"After Swapping"<<endl;
 swap(&x,&y);
 cout<<swap(&x,&y);
}
int swap (int*a,int *b){
	int temp=0;
	*a=temp;
	*a=*b;
	*b=temp;
}

