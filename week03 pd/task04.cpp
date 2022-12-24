#include <iostream>
using namespace std;
main(){
string name;
float one;
float two;
float three;
float four;
float five;
float result;
cout <<"Enter Your Name; ";
cin >> name;
cout<<" Enter subject 01 marks: ";
cin >> one;
cout<<" Enter subject 02 marks: ";
cin >> two;
cout<<" Enter subject 03 marks: ";
cin >> three;
cout<<" Enter subject 04 marks: ";
cin >> four;
cout<<" Enter subject 05 marks: ";
cin >> five;
result = ((one + two + three + four + five)/500)*100 ;
cout<<" you percentage: ";
cout << result;
}