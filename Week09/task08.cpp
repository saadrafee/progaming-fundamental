#include <iostream>
using namespace std;
main()

{
    int arrasize;
    cout << "Enter number of boxes ";
    cin >> arrasize;
    int time;
    int switc = 0;
    string color[arrasize];
    for (int idx = 0; idx < arrasize; idx++)
    {
        cout << "Enter " << idx + 1 << " color ";
        cin >> color[idx];
    }
    for (int idx = 1; idx < arrasize; idx++)
    {
        if (color[idx-1] != color[idx])
        {
            switc ++;
        }
    }

    time = 2 * arrasize + switc;
    cout << "Total time is " << time << " s" << endl;
}
