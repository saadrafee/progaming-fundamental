#include <iostream>
using namespace std;
void rent(int ton);
main()
{
    int ton;
    cout << "How many cargo packages you have to transport :";
    cin >> ton;
    rent(ton);
}
void rent(int ton)
{
    float totalton = 0;
    float minibus = 0;
    float truck = 0;
    float train = 0;
    float weight, averge;
    for (int x = 1; x <= ton ;x++)
    {
        cout << "Enter weight of " << x << " cargo :";
        cin >> weight;
        if (weight <= 3)
        {
            minibus = minibus + weight;
            totalton = totalton + weight;
        }
        else if (weight > 4 && weight < 12)
        {
            truck = truck + weight;
            totalton = totalton + weight;
        }
        else if (weight >= 12)
        {
            train = train + weight;
            totalton = totalton + weight;
        }
        
    }
    averge = ((minibus * 200) + (truck * 175) + (train * 120)) / totalton;
        minibus = minibus / totalton * 100;
        truck = truck / totalton * 100;
        train = train / totalton * 100;
        cout << "Average price per ton of carried cargo is " << averge << " $" << endl;
        cout << "Percentage of the cargo by minibus:" << minibus << " %" << endl;
        cout << "Percentage of the cargo by truck: " << truck << " %" << endl;
        cout << "Percentage of the cargo by train: " << train << " %" << endl;
}
