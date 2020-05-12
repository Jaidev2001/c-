#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main()
{
    int count;
    vector<string> str;
    cout<<"Enter the numbers:";
    cin>>count;
    for (int i = 1; i <=count; i++)
    {
      
        if(i%3==0&&i%5==0)
        {
            str.push_back("FizzBuzz");
        }
         else if(i%3==0)
        {
            str.push_back("Fizz");
        }
        else if(i%5==0)
        {
            str.push_back("Buzz");
        }
        else
        {

            str.push_back(to_string(i));
        }
        
    }
    for (int i = 0; i <count; i++)
    {
        cout<<str[i]<<", ";
    }
    
    
    return 0;
}