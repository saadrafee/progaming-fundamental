#include <iostream>
#include <windows.h>
using namespace std;

void country(string x, float y);


main()
{
 string x;
 float y;
  while(true)
   { 
    cout <<"Enter your country :";
    cin >>x;
    cout <<"Enter Ticket Price :";
    cin >>y;
    country(x,y);
   }
}
 void country(string x, float y)
  {
   float z;
  cout<<"_____________________"<<endl;
  cout<<"Ticket Price :"<<y<<endl;
   if (x=="pakistan")
    {
     z = y * 0.95;
     cout <<"Ticket Pricer After Discount :"<<z<<endl;
    }
   if (x=="ireland")
    {
     z = y * 0.90;
     cout <<"Ticket Pricer After Discount :"<<z<<endl;
    }
   if (x=="india")
    {
     z = y * 0.80;
     cout <<"Ticket Pricer After Discount :"<<z<<endl;
    }
   if (x=="england")
    {
     z = y * 0.70;
     cout <<"Ticket Pricer After Discount :"<<z<<endl;
     }

   if (x=="canda")
    {
     z = y * 45;
     cout <<"Ticket Pricer After Discount :"<<z<<endl;

    } 
  }
 
