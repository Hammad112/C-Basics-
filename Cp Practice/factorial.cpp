#include<iostream>
using namespace std;
main()
{
int x;
cout<<"Enter number whose factorial to be found==";
cin>>x;
int fact=1;
for(int i=1;i<=x;i++)
{
	fact=fact*i;
}
cout<<"factorial=="<<fact;





}

