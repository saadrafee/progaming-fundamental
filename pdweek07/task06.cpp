#include <iostream>
using namespace std;
void hospital(int day);
main()
{
    int day;
    cout << "Enter number of days you want to make calculation :";
    cin >> day;
    hospital(day);
}
void hospital(int day)
{
    int doc = 7;
    int patent;
    int treated = 0;
    int untreated = 0;
    for (int x = 1; x <= day; x++)
    {
        cout << "Enter number of patient for " << x << " day ";
        cin >> patent;
        if (x % 3 == 0)
        {
            if (treated < untreated)
            {
                doc = doc + 1;
            }
        }
        if (patent > doc)
        {
            untreated = untreated + patent - doc;
        }

        if (doc >= patent)
        {
            treated =treated + patent;
        }
        if (doc < patent)
        {
            treated = treated+doc;
        }
    }
    cout << "Treated " << treated << endl;
    cout << "untreated " << untreated << endl;
}
