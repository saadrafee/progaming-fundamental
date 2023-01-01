#include <iostream>
#include <windows.h>
using namespace std;
void stay(int total);
void go(int total);

main()
{
 int holiday,days,total;
 cout <<"Enter number of holidays :";
 cin>>holiday ;
 days = 365 - holiday;
 total= (holiday * 127) + (days * 63);
 if (total <= 30000)
  {
   stay(total);
  }

 if (total > 30000)
  {
   go(total);
  }
}

void stay(int total)
 {
  int remain,hours,min;
  remain = 30000 - total;
  hours = remain/60;
  min   = remain%60;
  cout<<"Tom will sleep well "<<hours <<" hours "<<min<<" minutes";"less for play";
   
  }

void go(int total)
 {
  int remain,hours,min;
  remain =total-30000;
  hours = remain/60;
  min   = remain%60;
  cout<<"Tom will run away "<<hours <<" hours "<<min<<" minutes";"less for play";
   
  }
 

