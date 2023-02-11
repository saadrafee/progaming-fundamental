#include <iostream>
using namespace std;
void print(int row);
main()
{
    int row;
    cout << "Enter number of rows ";
    cin >> row;
    print(row);
}
void print(int row)
{
    for (int x = 1; x <= row; x++)
    {
        for (int i = 1; i <= x; i++)
        {
            cout << "*";
        }
        for (int k=x+1 ; k<=row; k++)
        {
            cout<<" ";
        }
            for (int i = row-x; i >0; i--)
        {
            cout << " ";
        }
        for (int k=1 ; k<=x; k++)
        {
            cout<<"*";
        }

        
        cout << endl;
        

        
    }
}
