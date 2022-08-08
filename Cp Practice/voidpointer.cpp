#include<iostream>
using namespace std;
main()
{  int x=10;
   float y=12.1;
   void*p;
   p=&x;
   cout<<*(int*)p<<endl;
   p=&y;
   cout<<*(float* )p<<endl;
   






}

