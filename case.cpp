
#include <iostream>
using namespace std;

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
        if(initialAge<0)
        {age=0;
        cout<<"Age is not valid, setting age to 0.";
        }
       
    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console 
        
        if(age<13||age==0)
           { 
               cout<<"\nYou are young.";

            }
        else if(age>=13&&age<18){
             cout<<"\nYou are a teenager.";

        }
        else if(age>=18)
         {
            cout<<"\nYou are old";

        }


    }

    void Person::yearPasses(){
        // Increment the age of the person in here
        age++;
        

    }

int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}