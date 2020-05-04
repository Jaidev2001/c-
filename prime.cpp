#include <iostream>
using namespace std;

int main()
{
    int num,sum=0;
    cout<<"Enter the number to which you want to know the prime: ";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {sum=sum+1;
          cout<<i<<"\n";
           
        }
    }
    if(sum>2)
    cout<<num<<"IS NOT PRIME";
    else
    {
        cout<<num<<" IS PRIME";
    }
    
    return 0;
}