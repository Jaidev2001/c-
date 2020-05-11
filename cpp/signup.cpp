#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

class Sign
{
    
    public:
    string name;
    int age=0;
        void add()
        {
            cout<<"ADD USER, Enter User name and age";
            cout<<"\nEnter the Name:";
            cin>>name;
            cout<<"Enter the age:";
            cin>>age;
        }
        void fetch()
        {
            cout<<"USER DETAILS \nUSER NAME:"<<name;
            cout<<"\nUSER AGE:"<<age;

        }
};
 vector<Sign> arr;

int main()
{   
    Sign arr1;
     bool get=true;
     int n=0;
     int i=0;
     int num;
    while(get)
    {
        cout<<"\n\n*****USER SIGNUP APP*****";
        cout<<"\n1.Add record\n2.Fetch record\n3.Quit\nPlease select an option:";
        cin>>n;
        
        switch (n)
        {
        case 1:
            arr1.add();
            arr.push_back(arr1);
            cout<<"User added successfully.\nYour ID number is !!!! ---> "<<i+1;
            break;
        case 2:
            cout<<"\nPlease enter the ID number:";
            cin>>num;
            arr[num-1].fetch();
            break;
        case 3:
            get=false;
            break;
        default:
            cout<<"\n!!!!!Wrong input!!!!!";
            break;
        }
        i++;
    }
    return 0;
}