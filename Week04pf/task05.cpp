#include <iostream>
using namespace std;
void isElgible(int age);
main()
{
  int age;
  while (true)
  { 
 cout <<" Enter your Age :";
 cin >> age ;
 isElgible (age) ;
  }
}
 void isElgible(int age)
  {
    
    if (age >= 18 )
     {
      cout <<"Your Are Eligible "<<endl ;
     }
    
    if (age < 18 )
     {
      cout <<"Your Are not Eligible "<<endl ;
     }
  }