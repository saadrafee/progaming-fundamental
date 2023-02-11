#include <iostream>
using namespace std;
float studio(string month , float days);
float apartment(string month , float days);  
main()
{
    float days, studiop,apartmentp;
    string month;
    cout<<"Enter the month ";
    cin >>month;
    cout <<"Enter days of stay ";
    cin >>days;
    studiop = studio(month,days);
    apartmentp=apartment(month,days);
    cout<<"for APARTMENT "<<apartmentp<<"$"<<endl;
    cout<<"for STUDIO "<<studiop<<"$"<<endl;
}
float studio(string month , float days)
{
    float bill;
    if (month=="may"||month=="octobar")
    {
        if (days >14 )
        {
            bill=days*50;
            bill=bill*.70;
        }
        else if(days>7 && days<=14 )
        {
            bill=days*50;
            bill = bill*.95;
        }
        if(days<=7)
        {
            bill=days*50;
            
        }
        
    }

    
    else if (month=="june"||month=="september")
    {
        if(days>14)
        {
            bill=days*75.2;
            bill = bill*.80;
        }
        if(days<=14)
        {
            bill=days*75.2;
            
        }
        
    }
    else if (month=="july"||month=="august")
    {
        
            bill=days*76;   
        
    }
    return bill;
}
float apartment(string month , float days)
{
 float bill;
    if (month=="may"||month=="octobar")
    {
        if(days>14)
        {
            bill=days*65;
            bill = bill*.90;
        }
        if(days<=14)
        {
            bill=days*65;
            
        }
        
    }

    
    else if (month=="june"||month=="september")
    {
        if(days>14)
        {
            bill=days*68.7;
            bill = bill*.90;
        }
        if(days<=14)
        {
            bill=days*68.7;
            
        }
        
    }
    else if (month=="july"||month=="august")
    {
        if(days>14)
        {
            bill=days*77;
            bill = bill*.90;
        }
        if(days<=14)
        {
            bill=days*.77;
            
        }
        
    } 
    return bill;
}