#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x , int y);
void erase(int x, int y);
void printPacman(intx, inty);
 void printPacman(int x, int y);
char getCharAtxy(short int x, short int t);

main()
{
}
 char getCharAtxy(short intx, short inty)
  {
   CHAR_INFO ci;
   COORD xy ={0, 0};
   SMALL_RECT rect = {x, y, x, y};
   COORD coorBufSize;
   coordBufSize.X = 1;
   coordBufSize.Y = 1;
   return ReadConosoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBuffSize, xy, &rect) ? ci.Char.AsciiChar: ' ';
  }

  void gotoxy(int x, int y)
  {
   COORD coordinates;
   coordinates.X = x;
   coordinates.Y = y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
  }
 void erase(int x, int y)
  {
    gotoxy(x, y);
    cout<<" ";
  }
 void printPacman(int x, int y)
  {
    gotoxy(x, y);
    cout<<"P";
  }
 void printMaze()
  {
  cout<<"#############################"<<endl;
  cout<<"#                           #"<<endl;  
  cout<<"#                           #"<<endl;  
  cout<<"#                           #"<<endl;  
  cout<<"#                           #"<<endl;  
  cout<<"#                           #"<<endl;  
  cout<<"#                           #"<<endl;  
  cout<<"#                           #"<<endl;  
  cout<<"#                           #"<<endl;  
  cout<<"#                           #"<<endl;  
  cout<<"#                           #"<<endl;  
  cout<<"#                           #"<<endl;  
  cout<<"#                           #"<<endl;  
  cout<<"#                           #"<<endl;  
  cout<<"#                           #"<<endl;  
  cout<<"#                           #"<<endl;  
  cout<<"#                           #"<<endl;  
  cout<<"#                           #"<<endl;  
  cout<<"#                           #"<<endl; 
  cout<<"#############################"<<endl; 


  }
