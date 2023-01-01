#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);

main()
{
 system("cls");
 gotoxy(40,16);
 cout<<"SAADRAFI";
 
 
}


 void gotoxy(int x, int y)
  {
   COORD coordinates;
   coordinates.X = x;
   coordinates.Y = y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
  }