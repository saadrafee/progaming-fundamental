#include <iostream>
using namespace std;
main()
{
float pounds;
float price;
float area;
float perpound;
float perarea;
cout <<"Enter bag size in pounds: ";
cin >> pounds;
cout <<"Enter cost of bag: ";
cin >> price;
cout <<"Enter area covered by each bag in square feet: ";
cin >> area;
perpound = price / pounds;
perarea = price / area;
cout <<"_________________________________________________"<<endl;
cout <<"cost of the fertilizer per pound: "<< perpound<<endl;
cout <<"cost of fertilizer area per square feet : "<< perarea<<endl;



}