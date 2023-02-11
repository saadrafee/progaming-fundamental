#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
void erase(int x, int y);
void printMaze();
void printPacman(int x, int y);
char getCharAtxy(short int x, short int t);


main()
{
  int pacemanX = 4;
  int pacemanY =4;
  bool gameRunning = true;

  system("cls");
  printMaze();
  printPacman(pacemanX, pacemanY);

  while (gameRunning)
  {
    if(GetAsyncKeyState(VK_LEFT))
    {
       char nextloaction = getCharAtxy(pacemanX-1, pacemanY);
       if (nextloaction == ' ')
       {
        erase(pacemanX, pacemanY);
        pacemanX = pacemanX - 1;
        printPacman(pacemanX, pacemanY);
       }
    }
        if(GetAsyncKeyState(VK_RIGHT))
    {
       char nextloaction = getCharAtxy(pacemanX+1, pacemanY);
       if (nextloaction == ' ')
       {
        erase(pacemanX, pacemanY);
        pacemanX = pacemanX + 1;
        printPacman(pacemanX, pacemanY);
       }
    }   
        if(GetAsyncKeyState(VK_UP))
    {
       char nextloaction = getCharAtxy(pacemanX, pacemanY-1);
       if (nextloaction == ' ')
       {
        erase(pacemanX, pacemanY);
        pacemanY = pacemanY - 1;
        printPacman(pacemanX, pacemanY);
       }
    }
        if(GetAsyncKeyState(VK_DOWN))
    {
       char nextloaction = getCharAtxy(pacemanX, pacemanY + 1);
       if (nextloaction == ' ')
       {
        erase(pacemanX, pacemanY);
        pacemanY = pacemanY + 1;
        printPacman(pacemanX, pacemanY);
       }
    }
    if (GetAsyncKeyState(VK_ESCAPE))
    {
        gameRunning = false;
    }
    Sleep(200);
    
  }
}
 char getCharAtxy(short int x, short int y)
  {
   CHAR_INFO ci;
   COORD xy ={0, 0};
   SMALL_RECT rect = {x, y, x, y};
   COORD coordBufSize;
   coordBufSize.X = 1;
   coordBufSize.Y = 1;
   return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar: ' ';
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
