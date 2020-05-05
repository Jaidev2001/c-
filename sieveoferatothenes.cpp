#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number to which you want the prime(max=100):";
    cin>>num;
    int arr[100];
    for (int i = 2; i <=num; i++)
    {
        arr[i]=1;
    }
    
    for(int i=2;i*i<=num;i++)
    {
        for(int j=i*i;j<=num;j=j+i)
        {
            arr[j]=0;


        }
    }
    for (int i = 2; i <= num; i++)
    {
        if (arr[i])
        {
            cout<<i<<" ";
        }
        
        
    }
    

}