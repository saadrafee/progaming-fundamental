#include <iostream>
using namespace std;
float prograss(float hours,float days, float workers);
main()

{
 float hours;
 float days;
 float worker;
 float res;
 float hextra;
 float hless;
 
 cout <<"Enter needed hours for task : ";
 cin >>hours;
 cout <<"Enter Days :";
 cin >>days;
 cout <<"Enter number of  workers :";
 cin >>worker;
 res =prograss(hours,days,worker);
 
 hless = hours - res;
 hextra = res - hours; 
  
  if (res < hours )
   {
    cout<<"Not Eough Time!"<<hless<<"hours needed"<<endl;
   }
  if (res > hours)
   {
    cout<<"YES!"<<hextra<<"Hours left "<<endl;
   }
 

}
 float  prograss(float hours,float days, float workers)
  {
   float totalh;
   totalh = (days * 0.90)* 10 * workers ;
   return totalh;
   
  }