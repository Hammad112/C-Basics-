#include<iostream>
using namespace std;
main()
{ int x=10,*p,**p1,***p2;
  p=&x;
   p1=&p;
   p2=&p1;
  cout<<*p<<endl;
  cout<<***p2<<endl;
  cout<<**p1<<endl;






}

