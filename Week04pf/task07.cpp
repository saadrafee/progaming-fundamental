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
      if ( day != "sunday")
    {
     cout <<"payable amount :"<<amount<<endl;
    }

   float payable= 0.90*amount;

   if ( day == "sunday")
    {
     cout <<"payable amount :"<<payable<<endl;

    }

    

  }