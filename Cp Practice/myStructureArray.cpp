#include<iostream>

using namespace std;

int main()
{
    struct result
    {
        char name[15];
        int sub[4];
        int total;
        char grade;
    };

result student[]={         {"Athar" ,{62,69,70,40},2220,'A'},
                           {"Javed" ,{162,169,170,140},453,'P'},
                           {"Sethi" ,{262,269,270,240},2453,'P'},                      
                           {"Muhammad" ,{462,469,470,440},453,'P'}
                    };

   for (int i=0;i<5;i++)
   {
        cout<<"\nYour Name is="<<student[i].name<<endl;

        for (int j=0;j<4;j++)
        {
            cout<<"\nYour Subject Marks="<<student[i].sub[j]<<endl;
        }
        cout<<"\nYour Total Marks="<<student[i].total<<endl;
        cout<<"\nYour FYP Grade="<<student[i].grade<<endl;
        cout<<"***********************************"<<endl;
   }

    return 0;
} 
