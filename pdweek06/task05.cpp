#include <iostream>
using namespace std;
float bill(string day ,string fruite , float num);
main()
{
    float num,bil;
    string day,fruite;
    cout<<"Enter the day ";
    cin>>day;
    cout<<"Enter the fruite ";
    cin>>fruite;
    cout<<"Enter quantity of fruite ";
    cin>>num;
    bil = bill(day ,fruite , num);
    
    if (bil == 0)
    {
        cout<<"Error"<<endl;
    }
    if(bil > 0)
    {
        cout <<"your bill is "<<bil;
    }
    
}
float bill(string day ,string fruite , float num)
{
    float bill = 0;
    if (day =="sunday"|| day =="satuarday")
    {
        if (fruite =="banana")
        {
            bill = num *2.7;
        }
        if (fruite =="apple")
        {
            bill = num *1.25;
        }
        if (fruite =="orange")
        {
            bill = num *.90;
        }
        if (fruite =="grapefruit")
        {
            bill = num *1.6;
        }
        if (fruite =="kiwi")
        {
            bill = num *3.0;
        }
        if (fruite =="pineapple")
        {
            bill = num *5.6;
        }
        if (fruite =="grapes")
        {
            bill = num *4.2;
        }
    }
    if (day =="monday"|| day == "tuesday" || day == "wednesday"|| day =="thusday"|| day == "friday")
    {
        if (fruite =="banana")
        {
            bill = num *2.5;
        }
        if (fruite =="apple")
        {
            bill = num *1.2;
        }
        if (fruite =="orange")
        {
            bill = num *.85;
        }
        if (fruite =="grapefruit")
        {
            bill = num *1.45;
        }
        if (fruite =="kiwi")
        {
            bill = num *2.7;
        }
        if (fruite =="pineapple")
        {
            bill = num *5.5;
        }
        if (fruite =="grapes")
        {
            bill = num *3.85;
        }
    }
    return bill;
}