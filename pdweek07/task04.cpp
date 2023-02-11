#include <iostream>
using namespace std;
void seq(int digit);

main()
{
  int digit ;
  cout<<"Enter Parameter :";
  cin >>digit;
  seq(digit) ; 
    

}
void seq(int digit)
{
    int y;
    for (int x=1 ; x<= digit ; x++)
    {
        y=x;
        if (y%4==0)
        {
            y=y*10;
        }
        cout <<y<<" , ";
    }
}