#include <iostream>
using namespace std;

main()
{
    int ahours ,amin,ehour,emin,etime,atime,time,timeh,timem;
    cout <<"Enter Exam at(hour) ";
    cin>>ehour;
    cout<<"Enter Exam at(minutes) ";
    cin>>emin;
    cout<<"Enter Arrival (hours) ";
    cin>>ahours;
    cout<<"Enter Arrivel (minutes) ";
    cin >>amin;
    etime = (ehour*60)+emin;
    atime = (ahours*60)+amin;
    if (etime>atime)
    {
        time=etime-atime;
        if (time>=60)
        {
            timeh = time/60;
            timem = time%60;
            cout <<"Early! "<<timeh<<":"<<timem<<"hours early"<<endl;
        }
        if (time < 60)
        {
            cout <<"Early!"<<time<<" minutes early"<<endl;
        }
    }
    if (etime<atime)
    {
        time=atime-etime;
        if (time>=60)
        {
            timeh = time/60;
            timem = time%60;
            cout <<"Late! "<<timeh<<":"<<timem<<"hours late"<<endl;
        }
        if (time < 60)
        {
            cout <<"Late!"<<time<<" minutes late"<<endl;
        }
        
    }
    if (atime==etime)
    {
        cout<<"PREFECT! you are on time"<<endl;
    }
}
