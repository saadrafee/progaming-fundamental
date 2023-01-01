#include <iostream>
using namespace std;

void add(int number1, int number2);
void product(int number1, int number2);
void subtraction(int number1, int number2);
void division(int number1, int number2);

main()
{

 int number1;
 int number2;
 char operation;
  while(true)
   { cout<<"Enter First Number :";
     cin >> number1;
     cout<<"Enter second Number :";
     cin >> number2;
     cout <<"Enter operator(+ , - , / , *) :";
     cin >>operation;
    
 if (operation == '+')
 {
 add(number1, number2);
 }
 if (operation == '/')
 {
 division(number1, number2);
 }
 
 if (operation == '*')
 {
 product(number1, number2);
 }
 
 if (operation == '-')
 {
 subtraction(number1, number2);
 }
  }
  }
 void add(int number1, int number2)
 {
 int sum;
 sum = number1 + number2;
 cout <<"Sum is :"<<sum<<endl;
 }
 void product(int number1, int number2)
 {
 int product;
 product = number1 * number2;
 cout <<"product is :"<<product<<endl;
 }
 void subtraction (int number1, int number2 )
 {
 int subtract;
 subtract = number1-number2;
 cout << "subtration is :"<<subtract<<endl;
 }
 void division(int number1, int number2)
 {
 int division;
 division = number1 / number2;
 cout <<"division is :"<<division<<endl;
 }