#include<iostream>
using namespace std;
main()
{
	int x[4]={1,2,3,4};
	int i;
	for(i=0;i<4;i++)
	{
		cout<<*(x+i)<<endl;
	}
}
