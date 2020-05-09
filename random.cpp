#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<time.h>

using namespace std;
int main()
{
    bool get=true;
    int n=0;
   
    while (get)
    {
         cout<<"\nEnter the numbers of random number,o to exit:";
            cin>>n;
        if (n==0)
        {
            break;
        }
        srand((unsigned)time(0));
        for (int i = 0; i < n; i++)
        {
            
            cout<<rand()%10;
            if(i==n-1)
            {
                continue;
            }
            cout<<",";
        }
        
        cout<<"\n";
    }
    

    return 0;

}
    
