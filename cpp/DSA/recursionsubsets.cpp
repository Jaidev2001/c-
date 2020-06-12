#include<iostream>
using namespace std;

void p(string a,string curr="", int i=0)
    {
        if(i== a.length())
        {
            cout<<curr<<endl;
        return;
        }
        p(a,curr,i+1);
        p(a,curr+a[i],i+1);
    }

int main()
{
    
    p("abc");
 return 0;   
}
