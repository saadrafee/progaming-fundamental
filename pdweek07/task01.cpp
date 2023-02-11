#include <iostream>
using namespace std;
void print(int row);
main()
{
    int row;
    cout <<"Enter Desaring Rows :";
    cin >>row;
    print (row);

}
void print(int row)
{
    for (int x=1 ; x<=row ; x++)
    {
        for (int j =1 ; j<= x ; j++)
        {
            cout<<"*";
        }
        cout <<endl;
    }
    
}