#include <iostream>
using namespace std;
int main()
{   
   int num,fac=1;
   cout<<"enter the number: ";
   cin>>num;
   cout<<"\nThe factorial of the  number is:";
   for(int i=1;i<=num;i++)
   {  
       
       
       cout<<i<<"*";
       fac=fac*i;
       
   }
       cout<<"="<<fac;
     return 0;
}