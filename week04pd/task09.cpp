#include <iostream>
#include <windows.h>
using namespace std;
void rev(string x);
main()
{
 string x;
 cout << "Enter Input :";
 cin >> x;

 rev (x);
}

 void rev(string x)
 {
  if (x == "flase")
   {
    cout <<"output is True";
   }
  if (x == "true")
   {
    cout <<"output is Flase";
   }
 }