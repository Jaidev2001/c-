#include<iostream>
#include<string.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main()
{
    bool get=true;
    int guesscount,minnumber,maxnumber,randomnumber,guess,n;
    while(get)
    {
        cout<<"\nEnter the number of guess:";
        cin>>guesscount;
        cout<<"\nEnter the minimum number:";
        cin>>minnumber;
        cout<<"\nEnter the maximum number";
        cin>>maxnumber;
        srand((unsigned)time(0));
        randomnumber=rand()%maxnumber+minnumber;
        for (int i = 1; i <=guesscount; i++)
        {
            cout<<"Enter your guess:";
            cin>>guess;
            if(randomnumber==guess)
                
                {
                    cout<<"\nWell done, You guessed the right number";
                    break;
                }
            else if(guess>randomnumber)
            {
               // if(guess-randomnumber>maxnumber/2)
                cout<<"\nYou are high";
            }
            else if (guess<randomnumber)
            {
                cout<<"\nYou are  low";
            }
            cout<<"\n"<<guesscount-i<<" guess left.\n";     
            
        }
        cout<<"\nThe correct guess is:"<<randomnumber;
        cout<<"\n\nEnter 0 to exit or enter other number to play:";
        cin>>n;
        if(n==0)
        {
            break;
        }
    }

    return 0;
}