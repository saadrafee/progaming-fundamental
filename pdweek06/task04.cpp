#include <iostream>
using namespace std;
float regular(float min);
float premium(char time , float min);
main()
{
    float min,bill;
    char time , type;
    cout <<"Enter which type you customer are (regular , premium) r/p ";
    cin>>type;
    cout<<"Press 'D' for day time and 'N' for night time ";
    cin >>time;
    cout <<"Enter minutes you use the service :";
    cin >>min;
    if (type =='r')
    {
        bill = regular(min);
    }
    if (type =='p')
    {
        bill = premium(time , min);
    }
    cout<<"The chrages are  "<<bill<<endl;
}
float regular(float min)
{
    float bill;
    if (min <= 10)
    {
        bill =10;
    }
    if (min >10 )
    {
        bill = 10 +((min -10)*.2);
    }
    return bill;
}
float premium(char time , float min)
{
    float bill;
    if (time =='d' )
    {
        if (min <=75)
        {
            bill = 25;
        }
        if (min>75)
        {
            bill = 25 +((min - 75)*.10);
        }
    }
    if (time =='n' )
    {
        if (min <=100)
        {
            bill = 25;
        }
        if (min>100)
        {
            bill = 25 +((min - 75)*.05);
        }
    }
    return bill;
}