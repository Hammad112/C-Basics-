#include<iostream>
using namespace std;
int fact(int a)
{
  int factorial=1;
  for(int i=1;i<=a;i++)
  {
  	factorial=factorial*i;
  }
  return factorial;
}
main()
{
	int x;
	cout<<"Enter NO whose Factoriasl to be find:-->";
	cin>>x;
	cout<<"FACTORIAL OF NUMBER IS:::"<<fact(x)<<endl;
	
}
