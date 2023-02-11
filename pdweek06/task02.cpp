#include <iostream>
using namespace std;
float total(float num1,float num2, float num3 , float num4 ,float num5);
float percentage(float obtainmarks);
string grade(float per);
main()
{
    float num1,num2,num3,num4,num5,per,obtainmarks;
    string rank;
    string name;
    cout <<"Enter Student Name ";
    cin>>name;
    cout<<"Enter English marks  ";
    cin>>num1;
    cout<<"Enter Math marks  ";
    cin>>num2;
    cout<<"Enter Chemistry marks  ";
    cin>>num3;
    cout<<"Enter Social Science marks  ";
    cin>>num4;
    cout<<"Enter Biology marks  ";
    cin>>num5;
    obtainmarks = total(num1,num2,num3,num4,num5);
    per = percentage(obtainmarks);
    rank = grade(per);
    cout <<"Total Obtain marks is "<<obtainmarks<<" out of 500 "<<endl;
    cout <<"Percentage is "<<per<<endl;
    cout <<"Grade is "<<rank<<endl;    
}
float total(float num1,float num2,float num3 , float num4 ,float num5)
{
    return num1+num2+num3+num4+num5;
}
float percentage(float obtainmarks)
{
    float per = (obtainmarks / 500)*100;
    return per;
}
string grade(float per)
{
    string grade;
    if(per >= 90 && per <= 100)
    {
        grade = "A+";
    }
    if(per >= 80 && per <= 89)
    {
        grade = "A";
    }
    if(per >= 70 && per <= 79)
    {
        grade = "B+";
    }
    if(per >= 60 && per <= 69)
    {
        grade = "B";
    }
    if(per >= 50 && per <= 59)
    {
        grade = "C";
    }
    if(per >= 40 && per <= 49)
    {
        grade = "D";
    }
    if(per <40)
    {
        grade = "F";
    }
    return grade;
}