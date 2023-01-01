#include <iostream>
#include <windows.h>
using namespace std;
void check(int x , int y);
main()
{
 int x,y;
 cout <<"Enter First number :";
 cin >>x;
 cout << "Enter second number :";
 cin >>y;
 check (x,y);
}

 void check(int x, int y)
 {
  if (x == y)
   {
    cout <<" True";
   }
  if (x!=y)
   {
    cout <<"Flase";
   }
 }