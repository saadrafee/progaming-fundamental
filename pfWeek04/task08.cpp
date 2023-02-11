#include <iostream>
using namespace std;
void calculateBill(string day, int amount);
main()
{
 int amount;
 string day;
   while (true)
    {
     cout << "Enter day :" ;
     cin >> day;
     cout << "Amount :";
     cin >> amount;
     calculateBill(day,amount);
    }
}
  void calculateBill(string day, int amount)
  { 
      float payable1 = .95 * amount;
      float payable2 = .90 * amount;
      if ( day == "monday")
    {
     cout <<"payable amount :"<<payable1<<endl;
    }

    if ( day == "tuesday")
    {
     cout <<"payable amount :"<<payable1<<endl;
    }


    if ( day == "wednesday")
    {
     cout <<"payable amount :"<<payable1<<endl;
    }

    if ( day == "thusday")
    {
     cout <<"payable amount :"<<payable1<<endl;
    }

    if ( day == "friday")
    {
     cout <<"payable amount :"<<payable1<<endl;
    }

    if ( day == "satuarday")
    {
     cout <<"payable amount :"<<payable1<<endl;
    }

   if ( day == "sunday")
    {
     cout <<"payable amount :"<<payable2<<endl;
    

    }

    

  }