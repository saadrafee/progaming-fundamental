#include <iostream>
using namespace std;
bool checkseven(int number);
main()
{
    int arraysize;
    int counter = 0;
    bool same = false;
    cout << "Enter Array size ";
    cin >> arraysize;
    string arr[arraysize];
    cout << "Enter Array " << endl;
    for (int idx = 0; idx < arraysize; idx++)
    {
        cin >> arr[idx];
    }
    string word = arr[0];
    for (int idx = 0; idx < arraysize; idx++)
    {
        if (arr[idx] == word)
        {
            counter++;
        }
    }
    if (counter == arraysize)
    {
        same = true;
    }
    cout<<same;
}