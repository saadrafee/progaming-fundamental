#include <iostream>
using namespace std;
bool checkseven(int number);
int evenodd(int first, int num);
main()

{
    int arraysize;
    cout << "Enter array size ";
    cin >> arraysize;
    int arr[arraysize];
    int arr2[arraysize];
    cout << "Enter Array " << endl;
    for (int index = 0; index < arraysize; index++)
    {
        cin >> arr[index];
    }

    for (int index = 0; index < arraysize; index++)
    {
        arr2[index] = evenodd(arr[0], arr[index]);
    }

    for (int index = 0; index < arraysize; index++)
    {
        cout<< arr2[index]<<" ";
    }
    

}
int evenodd(int first, int num)
{
    int number;
    if (num % 2 == 0)
    {
        if (first == 0)
        {
            number = num - (2 * 10);
        }
        else
        {
            number = num - (2 * first);
        }
    }
    else
    {
        if (first == 0)
        {
            number = num + (2 * 10);
        }
        else
        {
            number = num + (2 * first);
        }
    }
    return number;
}