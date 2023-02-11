#include <iostream>
using namespace std;
void print(int row);
main()
{
    int row;
    cout << "Enter Desaring Rows :";
    cin >> row;
    print(row);
}
void print(int row)
{
    for (int x = 1; x <= row; x++)
    {

        for (int j = x; j < row; j++)
        {
            cout << " ";
        }
        for (int k = row - x; k < row; k++)
        {
            cout << "#";
        }

        cout << endl;
    }
    for (int x = 0; x <= row; x++)
    {

        for (int j = row - x; j < row; j++)
        {
            cout << " ";
        }
        for (int k = x; k < row; k++)
        {
            cout << "#";
        }

        cout << endl;
    }
}