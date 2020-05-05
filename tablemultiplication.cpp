#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;

       for(int i=0;i<=n;i++) 
       {
        	if(i==0) 
            {
        		cout<<"X ";
        	}
        	else
             {
        		cout<<i<<" ";
        	}
        	for(int j=1;j<=n;j++) 
            {
        		if(i==0) 
                {
        			cout<<j<<" ";
        			
        		}
        		else 
                {
        			cout<<i*j<<" ";
        			
        			
        		}
        		
        	}
        	cout<<"\n";
        }
        for (int i = 1; i <=10; i++)
        {
            cout<<n<<"*"<<i<<"="<<n*i<<endl;
            
        }
        


    return 0;
}