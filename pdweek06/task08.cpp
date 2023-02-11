#include <iostream>
using namespace std;
string state(int h,int x, int y);
main()
{
    int h,x,y;
    string out;
    cout<<"Enter the height of box :";
    cin>>h;
    cout<<"Enter the x-axis :";
    cin>>x;
    cout<<"Enter the y-axis :";
    cin>>y;
    out = state( h, x, y);
    cout<<out;
}
string state(int h,int x, int y)
{
    string out;
    if((x>0 && x < (3*h))&&(y>0 && y<h))
    {
        out = "INSIDE ";
    }
    if((x>h && x < (2*h))&&(y>0 && y<(4*h)))
    {
        out = "INSIDE ";
    }
    else if((x<h && y>h))
    {
        out = "OUTSIDE";
    }
    else if((x>(2*h)&&y>h))
    {
        out = "OUTSIDE";
    }
    else if(x>=0 && y>(4*h))
    {
        out = "OUTSIDE";
    }
    else
    {
        out ="AT BORDAR";
    }
    return out;
    
}


