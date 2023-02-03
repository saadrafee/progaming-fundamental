#include <iostream>
using namespace std;
main()
{
    bool oddeven;
    string word;
    cout << "Enter String ";
    getline(cin, word);
    int counter ;
    counter = word.length();
    if (counter % 2 == 0)
    {
        oddeven = true;
    }
    else 
    {
        oddeven = false;
    }
    cout<<oddeven;
    
    
}