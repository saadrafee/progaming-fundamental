#include <iostream>
using namespace std;
string sign(string month ,int date);
main()
{
    string month, zodiac;
    int date;
    cout<<endl<<"_____________________________"<<endl;
    cout<<" Check here your Zodiac Sign "<<endl;
    cout<<"_____________________________"<<endl;
    cout <<"Enter the date your born ";
    cin >>date;
    cout<<"Enter Month of Birth ";
    cin>>month;
    zodiac = sign(month, date);
    cout <<"Your zodiac sign is "<<zodiac<<endl;

}
string sign(string month ,int date)
{
    string sign;
    if ((month =="march" && (date >= 21 && date<=31))||(month =="april" && (date >= 1 && date<=19)))
    {
        sign ="Aries";
    }
    if ((month =="april" && (date >= 20 && date<=31))||(month =="may" && (date >= 1 && date<=20)))
    {
        sign ="Taurus";
    }
    if ((month =="may" && (date >= 21 && date<=31))||(month =="june" && (date >= 1 && date<=20)))
    {
        sign ="Gemini";
    }
    if ((month =="june" && (date >= 21 && date<=30))||(month =="july" && (date >= 1 && date<=22)))
    {
        sign ="Cancer";
    }
    if ((month =="july" && (date >= 23 && date<=31))||(month =="august" && (date >= 1 && date<=22)))
    {
        sign ="Leo";
    }
    if ((month =="august" && (date >= 22 && date<=31))||(month =="september" && (date >= 1 && date<=22)))
    {
        sign ="Virgo";
    }
    if ((month =="september" && (date >= 23 && date<=30))||(month =="october" && (date >= 1 && date<=22)))
    {
        sign ="Libra";
    }
    if ((month =="october" && (date >= 23 && date<=31))||(month =="november" && (date >= 1 && date<=21)))
    {
        sign ="Scorpio";
    }
    if ((month =="november" && (date >= 22 && date<=30))||(month =="december" && (date >= 1 && date<=21)))
    {
        sign ="sagittarius";
    }
    if ((month =="december " && (date >= 22 && date<=31))||(month =="january" && (date >= 1 && date<=19)))
    {
        sign ="Capicorn";
    }
    if ((month =="january" && (date >= 20 && date<=31))||(month =="february" && (date >= 1 && date<=18)))
    {
        sign ="Aquarius";
    }
    if ((month =="february" && (date >= 19 && date<=28))||(month =="march" && (date >= 1 && date<=20)))
    {
        sign ="Pisces";
    }
    return sign;
}
