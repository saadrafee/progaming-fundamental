#include <iostream>
using namespace std;
main()
{
    int index = 5;
    string movies[index] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    int movieindex = -1;
    string movie;
    float bill;
    cout << "Enter Movie name  ";
    cin >> movie;

    for (int idx = 0; idx < index; idx++)
    {
        if (movie == movies[idx])
        {
            movieindex = idx;
            break;
        }
    }
    if (movieindex < 0)
    {
        cout << "Movie is not avalible " << endl;
    }
    else
    {
        if(movieindex%2==0)
        {
            bill = 500*.90;
        }
        else
        {
            bill = 500*.95;
        }
        
    }
    cout<<"Ticket price is "<<bill;
}