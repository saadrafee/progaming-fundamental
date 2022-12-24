#include<iostream>
using namespace std;
main()
{
string name;
float intermediate;
float ecat;
float matric;
float interper;
float ecatper;
float matricper;
float aggregate;
cout <<"Applicant Name: ";
cin >>name;
cout <<"Marks in Matric...";
cin >>matric;
cout <<"Marks in Intermediate...";
cin >>intermediate;
cout <<"Ecat marks...";
cin >>ecat;
interper = (intermediate / 100)*40;
ecatper =  (ecat / 100)*50;
matricper =matric/100*10 ;
aggregate = (interper+ecatper+matricper)*100 / 630;
cout<<"Aggregate...";
cout <<aggregate;
}