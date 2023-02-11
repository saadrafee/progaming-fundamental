#include <iostream>
using namespace std;
int pramide(int rows );

main()
{
   int rows ,number ;
   cout<<"Enter number of rows of triangle ";
   cin>> rows;
   number = pramide(rows);
   cout<<number <<" dots require to build "<<rows <<"rows triangle"<<endl;
    

}
int pramide(int rows )
{
    int y=0;
    for(int x=1 ;x<=rows ; x++)
    {
        y=y+x;
    }
    return y;
}