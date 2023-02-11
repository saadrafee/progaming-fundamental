#include <iostream>
using namespace std;
float m(float rate);
float e(float rate);
float s(float rate);
float v(float rate);
float t(float rate);
main()

{
 float rate;
 char code;
 float motor;
 float electric;
 float sedan;
 float van;
 float truck;
 
 
 cout <<endl<<"Press 'M' for motorcycle "<<endl;
 cout <<"Press 'E' for Electric Vehicle "<<endl;
 cout <<"Press 'S' for Sedan"<<endl;
 cout <<"Press 'V' for Van "<<endl;
 cout <<"Press 'T' for truck"<<endl;
 cin  >>code;
 cout <<"Enter Price of Vehicle ";
 cin >>rate;

 motor = m(rate);
 electric = e(rate);
 sedan = s(rate);
 van =  v(rate);
 truck = t(rate);

 if(code=='m')
  {
   cout <<"Final Price is "<<motor<<" include 6% tax ."<<endl;
  } 

 if(code=='e')
  {
   cout <<"Final Price is "<<electric<<" include 8% tax ."<<endl;
  }

 if(code=='s')
  {
   cout <<"Final Price is "<<sedan<<" include 10% tax ."<<endl;
  }

 if(code=='v')
  {
   cout <<"Final Price is "<<van<<" include 12% tax."<<endl; 
  }

 if(code=='t')
  {
   cout <<"Final Price is "<<truck<<" inckude 15% tax."<<endl;
   
  }

}

float m(float rate)
 {
  int finalPrice;
  finalPrice = rate + (rate * .06);
  return finalPrice; 
 }

float e(float rate)
 {
  int finalPrice;
  finalPrice = rate + (rate * .08);
  return finalPrice; 
 }

float s(float rate)
 {
  int finalPrice;
  finalPrice = rate + (rate * .10);
  return finalPrice; 
 }

float v(float rate)
 {
  int finalPrice;
  finalPrice = rate + (rate * .12);
  return finalPrice; 
 }

float t(float rate)
 {
  int finalPrice;
  finalPrice = rate + (rate * .15);
  return finalPrice; 
 }