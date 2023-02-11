#include <iostream>
using namespace std;
void evenodd(int num);
main()
{
 int num;
  while(true)
   {
    cout << "Enter Number :";
    cin >> num;
    evenodd(num);
    }
}

 void evenodd(int num) 
  {
   if (num % 2 == 0)
     {
     cout <<" Number is Even"<<endl; 
     }
   if (num % 2 != 0)
     {
     cout <<" Number is odd"<<endl; 
     }


  }