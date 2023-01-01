#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void printmaze();
void palyermove(int x, int y);

main()
{
 system("cls");
 printmaze();
 int x=3;
 int y=3;
 while(true)
  {
   palyermove(x,y);
   if(y < 11)
    {
      y=y+1;
    }
    if(y ==20)
    {
     gotoxy(x, y-1);
     cout <<" ";
      x=3;    
    } 
  }
 
}
 void palyermove(int x,int y)
  {
   gotoxy (x,y-1);
   cout<<" ";
   gotoxy (x,y);
   cout <<"P";
   Sleep(300);
  }


 void printmaze()
  {
   cout <<"#######################################"<<endl;
   cout <<"#                                     #"<<endl;
   cout <<"#                                     #"<<endl;
   cout <<"#                                     #"<<endl;
   cout <<"#                                     #"<<endl;
   cout <<"#                                     #"<<endl;
   cout <<"#                                     #"<<endl;
   cout <<"#                                     #"<<endl;
   cout <<"#                                     #"<<endl;
   cout <<"#                                     #"<<endl;
   cout <<"#                                     #"<<endl;
   cout <<"#                                     #"<<endl;
   cout <<"#                                     #"<<endl;
   cout <<"#######################################"<<endl;
  }


 void gotoxy(int x, int y)
  {
   COORD coordinates;
   coordinates.X = x;
   coordinates.Y = y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
  }