#include <iostream>
using namespace std;
string activity(string temp, string humidity );
main()
{
    string temp;
    string humidity;
    string res;
    cout<<"Enter the Temperature (warm/cold) ";
    cin >> temp;
    cout <<"Enter humidity levels (dry/humid) ";
    cin >> humidity;
    res = activity(temp ,humidity);
    cout << res;
}
string activity(string temp, string humidity )
{
    string act;

    if(temp =="warm" && humidity =="dry")
    {
        act = "Play tennis";
    }
    if(temp =="warm" && humidity =="humid")
    {
        act = "swim";
    }
    if(temp =="cold" && humidity =="dry")
    {
        act = "Play basketball";
    }
    if(temp =="cold" && humidity =="humid")
    {
        act = "Watch TV";
    }
    return act;
}
