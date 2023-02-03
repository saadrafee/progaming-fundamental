#include <iostream>
using namespace std;
bool checkseven(int number);
main()
{
    bool seven;
    int arraysize;
    cout << "Enter array size ";
    cin >> arraysize;
    int arr[arraysize];
    cout << "Enter Array "<<endl;
    for (int index = 0; index < arraysize; index++)
    {
        cin >> arr[index];
        
    }
    

        for (int index = 0; index < arraysize; index++)
    {
        seven = checkseven(arr[index]);
        if (seven == true)
        {
            break;
        }
    }
    if (seven == true)
    {
        cout<<"BOOM!"<<endl;
    }
    else{
        cout<<"there is no 7 in the array"<<endl;
    }
}
bool checkseven(int number)
{
    int y;
    for (int x = number; x > 0; x = x / 10)
    {
        y = x % 10;
        if (y == 7)
        {
            return true;
        }
    }
    return false;
}