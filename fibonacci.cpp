#include <iostream>
using  namespace std;
int main()
{
    int num,a=0,b=1,c;
    cout<<"Enter the number:";
    cin>>num;
    cout<<"Fibonacci series till the number are: "<<a<<" "<<b<<" ";

    for(int i=2;i<num;i++)
    {
       c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;

        
    }
    return 0;
}