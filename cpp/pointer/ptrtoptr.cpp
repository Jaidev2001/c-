#include <iostream>
using namespace std;

int main()
{
    char const* alphabet[26]
    {
        "alpha",
        "bravo",
        "charlie",
        "delta",
        "echo",
        "foxtrot"
    };

    for (auto const** p = alphabet; *p != nullptr; ++p)
    {
        cout << *p << " ";
    }
    cout << endl;
    
    return 0;
}