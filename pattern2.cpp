#include <iostream>
using namespace std;
int main()
{
    int num,num2,sum=0;
    cout<<"Enter the numbers of patterns:";
    cin>>num;
     for(int i=0;i<num;i++)
     {
         for (int j = 0; j <= i; j++)
         {
             sum++;
             cout<<sum<<" ";
         }
         cout<<"\n";
         
     }
     
      
      }
