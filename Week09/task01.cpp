#include <iostream>
using namespace std;
main()
{
    int index = 4;
    bool yes = true;
    string fruit[index] = {"peach", "apple", "guava", "watermelon"};
    int price[index] = {60, 70, 40, 30};
    string fruitname;
    float kilo;
    float bill;
    int priceindex = -1;
    cout << "Enter fruite name ";
    cin >> fruitname;

    for (int idx = 0; idx < index; idx++)
    {
        if (fruitname == fruit[idx])
        {
            priceindex = idx;
            break;
        }
    }
    if (priceindex < 0)
    {
        cout << "fruit is not avalible " << endl;
    }
    else
    {
        cout << "Enter kilo ";
        cin >> kilo;
        bill = price[priceindex] * kilo;
        cout << "Your bill is " << bill << endl;
    }
}