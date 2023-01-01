#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);

void A();
void W();

void I();
void S();

main()
{
 system("cls");
 gotoxy(33,0);
 A();
  gotoxy(33,8);
  W();
   gotoxy(33,16);
  A();
    gotoxy(33,24);
  I();
  gotoxy(33,32);
  S();

 
 
}
 void A()
 {
  cout <<"         "<<endl;
  cout <<" ########## "<<endl;
  cout <<" ##      ## "<<endl;
  cout <<" ##      ## "<<endl;
  cout <<" ########## "<<endl;
  cout <<" ##      ## "<<endl;
  cout <<" ##      ## "<<endl;
  cout <<" ##      ## ";
 }
 void W()
 {
    cout <<"         "<<endl;
  cout<<"##  ##  ## "<<endl;
  cout<<"##  ##  ## "<<endl;
  cout<<"##  ##  ## "<<endl;
  cout<<"## #### ## "<<endl;
  cout<<" ###  ### "<<endl;
  cout<<"  ##  ##  " ;
 }


 void I()
 {
  cout <<"         "<<endl;
  cout <<"##############"<<endl;
  cout <<"      ##     "<<endl;
  cout <<"      ##     "<<endl;
  cout <<"      ##     "<<endl;
  cout <<"      ##     "<<endl;
  cout <<"      ##     "<<endl;
  cout <<"##############";
 }
 void S()
 {
  cout <<"         "<<endl;
  cout<<"     ####       "<<endl;
  cout<<"   ########       "<<endl;
  cout<<" ###      ##     "<<endl;
  cout<<"###        ##    "<<endl;
  cout<<"  ###                "<<endl;
  cout<<"   ####        "<<endl;
  cout<<"      ###      "<<endl;
  cout<<"        ###    "<<endl;
  cout<<"          ###   "<<endl;
  cout<<"  ###      ###     "<<endl;
  cout<<"    ########       "<<endl;
  cout<<"     ######        ";


 
 }


 void gotoxy(int x, int y)
  {
   COORD coordinates;
   coordinates.X = x;
   coordinates.Y = y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
  }