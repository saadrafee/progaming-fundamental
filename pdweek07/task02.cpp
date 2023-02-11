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
    for (int x=row ; x>=0 ; x--)
    {
        for (int j = 0 ; j <= x ;  j++)
        {
            cout<<"#";

        }
        cout <<endl;
    }
    
}