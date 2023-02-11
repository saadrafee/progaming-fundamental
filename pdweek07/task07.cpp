#include <iostream>
using namespace std;
void percentage(int count);
main()
{
    int count;
    cout << "Enter the number count :";
    cin >> count;
    percentage(count);
}
void percentage(int count)
{
    float p2 = 0;
    float p3 = 0;
    float p4 = 0;
    int num;
    for (int x = 1; x <= count; x++)
    {
        cout << "Enter " << x << " number :";
        cin >> num;
        if (num % 2 == 0)
        {
            p2 = p2 + 1;
        }
        if (num % 3 == 0)
        {
            p3 = p3 + 1;
        }
        if (num % 4 == 0)
        {
            p4 = p4 + 1;
        }
    }
    p2 = (p2 / count) * 100;
    p3 = (p3 / count) * 100;
    p4 = (p4 / count) * 100;
    cout << "The Percentage of numbers divisable with 2 is " << p2 << " %" << endl;
    cout << "The Percentage of numbers divisable with 3 is " << p3 << " %" << endl;
    cout << "The Percentage of numbers divisable with 4 is " << p4 << " %" << endl;
}
