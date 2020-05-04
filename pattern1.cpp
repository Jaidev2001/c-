#include <iostream>
using namespace std;
int main()
{
   int n,k=1;
   cout<<"Enter the numbers of patterns";
   cin>>n;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n-i;j++)
       {
           cout<<"*";

       }
       for(int j=0;j<i+k;j++)
       {
           cout<<" ";

       }
       for(int j=0;j<n-i;j++)
       {
           cout<<"*";
       }
       cout<<endl;
       k++;
   }
   cout<<endl;
int l=n;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<=i;j++)
       {
           cout<<"*";

       }
       for(int j=l*2-1;j>0;j--)
       {
           cout<<" ";

       }
       for(int j=0;j<=i;j++)
       {
           cout<<"*";
       }
       cout<<endl;
       l--;
   }
    return 0;
}