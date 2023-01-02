#include<iostream>
#include<windows.h>
using namespace std;
void uet();

main()
{
int choice;
string name1 , name2;
float fsc1, fsc2,matric1,matric2,ecat1,ecat2, agg1,agg2; 
char a;
 while(true)
 {
  system ("cls");
  uet();
   cout <<"Welcome to Uet"<<endl<<endl;
   cout <<"Press 1 to Enter Details of first Students!"<<endl;
   cout <<"Press 2 to Enter Details of second Students!"<<endl;
   cout <<"Press 3 to calculate the aggregate of first student!"<<endl;
   cout <<"Press 4 to calculate the aggregate of second student!"<<endl;
   cout <<"Press 5 to display the student with RollNumber 01!"<<endl;
   cout <<"Choice :";
   cin >>choice;
   if (choice==1)
    {
    system("cls");
        cout <<"Enter your name :"; 
   cin>>name1;
   cout <<"Enter your Matric :"; 
   cin>>matric1;
   cout <<"Enter your inter out of 550 :"; 
   cin>>fsc1;
   cout <<"Enter your ECAT :"; 
   cin>>ecat1;

   agg1= ((matric1/1100*100)*.30)+((fsc1/550*100)*0.30)+((ecat1/400*100)*0.40);
   cout<<"press any key to continue";
   cin >>a;

 
    }
      if (choice==2)
    {
     system("cls");

   cout <<"Enter your name :"; 
   cin>>name2;
   cout <<"Enter your Matric :"; 
   cin>>matric2;
   cout <<"Enter your inter out of 550 :"; 
   cin>>fsc2;
   cout <<"Enter your ECAT :"; 
   cin>>ecat2;
   agg2= ((matric2/1100*100)*.30)+((fsc2/550*100)*0.30)+((ecat2/400*100)*0.40);
   cout<<"press any key to continue";
   cin >>a;

    }
   if (choice==3)
    {
    system("cls");
   cout <<"Aggregate of student 1 is "<<agg1<<endl; 
   cout<<"press any key to continue";
   cin >>a;
    }
   if (choice==4)
    {
    system("cls");
   cout <<"Aggregate of student 2 is "<<agg2<<endl;
   cout<<"press any key to continue";
   cin >>a; 
    }

   if (choice==5)
 {
  char a;
    if(ecat1>ecat2)
     {cout<<name1<<" is at roll number 1."<<endl;
      }
    if(ecat1<ecat2)
     {cout<<name2<<" is at roll number 1."<<endl;
      }
   cout<<"press any key to continue";
   cin >>a;
  
  }
 }
}

 void uet()
  {
   cout <<"##################################"<<endl;
   cout <<"#           UET Mangment         #"<<endl;
   cout <<"##################################"<<endl;
  }


