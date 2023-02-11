#include <iostream>
using namespace std;
main()

{
    string pinst;
    string steps[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado",
                      "Pop", "Lock", "Arabesque"};
    cout << "Enter pin ";
    cin >> pinst;
    for (int i = 0; i < 4; i++)
    {
        if (pinst[i] == '1' || pinst[i] == '2' || pinst[i] == '3' || pinst[i] == '4' || pinst[i] == '5' || pinst[i] == '6' || pinst[i] == '7' || pinst[i] == '8' || pinst[i] == '9' || pinst[i] == '0')
        {
        
        }
        else
        {
            cout<<"invalid"<<endl;
            return 0;
        }
    }

    for (int idx = 0; idx < 4; idx++)
    {
        int n = pinst[idx] - 48 + idx;
        if (n > 9)
        {
            n = n - 10;
            cout << steps[n] << " ";
        }
        else
        {
            cout << steps[n] << " ";
        }
    }
}
