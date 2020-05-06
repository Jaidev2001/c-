#include<iostream>
#include<string.h>
#define age_a 25
#define age_b 50
#define name "Jaidev"
char func(int a)
{
    if(a<=age_a)
        return 'A';
    else if(a<=age_b)
    {
        return 'B';
    }
    else
    {
        return 'C';
    }
    
}
int main()
{
    int age;
    std::string Name;
    std::cout<<"Enter the name: ";
    getline(std::cin,Name);
    std::cout<<"Enter the age: ";
    std::cin>>age;
    std::cout<<"Welcome "<<Name<<". You are in Group "<<func(age);

    return 0;
}