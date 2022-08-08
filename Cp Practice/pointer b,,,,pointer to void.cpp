#include<iostream>
using namespace std;

main()
{
int n=10;
char s='a';
float b=12.4;
void* ptr;
ptr=&n;
cout<<n<<endl<<ptr<<endl;
ptr=&s;
cout<<s<<endl<<ptr<<endl;
ptr=&b;
cout<<b<<endl<<ptr<<endl;

}
