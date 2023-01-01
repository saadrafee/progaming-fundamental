#include <iostream>
#include <windows.h>
using namespace std;


main()
{
 float red;
 float white;
 float tulips;
 float price;
 float dis;
 cout <<"Entre number of Red roses :";
 cin >> red;
 cout <<"Enter number of White roses :";
 cin >> white;
 cout <<"Enter number of Tulips :";
 cin >> tulips;
 price = (red * 2) + (white * 4.10) + (tulips * 2.5);
 dis   = price * .80;
cout<<"___________________________________"<<endl;
cout<<"Total amount          :"<<price<<endl;
  if (price >=200)
   {
    cout <<"Amount after discount :"<<dis<<endl;  
   }
cout<<"___________________________________"<<endl;
 
 
}


