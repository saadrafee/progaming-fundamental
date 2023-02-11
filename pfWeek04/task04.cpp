#include <iostream>
using namespace std;
void showResult(int marks);
main()
{
 int marks;
  while(true)
 {
 cout <<"Enter marks: ";
 cin >> marks;
 showResult(marks);
 }
 }
 void showResult(int marks)
 {
  if ( marks > 50)
 { 
 cout << "pass"<<endl;
 }
 if ( marks < 50)
 {
 cout << "fail"<<endl;
 }
  if ( marks == 50)
 {
 cout << "Mahnat Karo"<<endl;
 }
 }