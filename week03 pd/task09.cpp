#include <iostream>
using namespace std;
main()
{
int digit;
int num1;
int num2;
int num3;
int num4;
int result;
cout <<"Enter four digit number";
cin >>digit;
num1 = digit%10;
num2 = digit%100/10;
num3 = digit%1000/100;
num4 = digit%10000/1000;
result =num1+num2+num3+num4;
cout <<"sum :"<<result;
}