#include <iostream>
using namespace std;
main()
{
float initialvel;
float accerlation;
float time;
float result;
cout <<" Enter Initial Velocity :";
cin >> initialvel ;
cout <<" Enter Accerlation :";
cin >> accerlation;
cout <<"Enter Time :";
cin >>time;
result = accerlation*time+initialvel;
cout <<"Final Velocity :";
cout <<result;




}