#include <iostream>
using namespace std;
main()
{
float vprice;
float fprice;
float vkgs;
float fkgs;
float result;
cout <<"vegetable price per kg :";
cin >> vprice;
cout << "Fruit price per kg :";
cin >> fprice;
cout <<" Total vegetable sold in kg :";
cin >>vkgs;
cout <<"Total fruite sold in kg :";
cin >>fkgs;
result = ((fkgs*fprice) + (vprice*vkgs))/1.94;
cout <<"____________________________________"<<endl;
cout <<"Total earning in Rupees :"<<result;
}