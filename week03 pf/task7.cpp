# include <iostream>
using namespace std;
main()
{
int mb;
int kb;
int bytes;
int bits;
int result;
cout <<"Enter Mbs :";
cin >> mb;
bits = 1;
bytes =8*bits;
kb =1024*bytes;
result=kb*1024*mb;

cout<<"Bits"<<mb*1024*1024*8;

}