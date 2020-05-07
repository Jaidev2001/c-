#include<iostream>
#include<string.h>
using namespace std;
int main()
{  
    string choice;
   cout<<"1-for add\n2-for sub\n3-for div\n4-for multiply";
   cout<<"Enter your choice:";
   getline(cin,choice);
   int c=stoi(choice);
   switch(c)
   {
       case 1:cout<<"add";
       break;
       case 2:
       cout<<"sub;";
       break;
       case 3:
       cout<<"div";
       break;
       case 4:
       cout<<"multi";
       break;
       default:
       cout<<"Invalid choice";

   }
    return 0;
}