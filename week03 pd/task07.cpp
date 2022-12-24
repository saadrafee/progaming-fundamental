#include <iostream>
using namespace std;
main()
{
string name;
float priceadult;
float pricechild;
float adultsold;
float childsold;
float perdenoted;
float sale;
float net;
cout <<"Enter Movie name: ";
cin >>name;
cout <<"Enter Adult ticket price :";
cin >> priceadult;
cout <<"Enter Child Ticket price :";
cin >>pricechild;
cout <<"Enter Number of Adult Ticket slod :";
cin >>adultsold;
cout <<"Enter Number of child Ticket slod :";
cin >>childsold;
cout <<"Enter Percentage to Denote :";
cin >>perdenoted;
sale = (priceadult*adultsold)+(pricechild*childsold);
net = sale - ((sale/100)*perdenoted);
cout <<"______________________________________________"<<endl;
cout <<"Total Amount Generated : "<< sale <<endl;
cout <<"Amount after denation :"<< net <<endl;




}