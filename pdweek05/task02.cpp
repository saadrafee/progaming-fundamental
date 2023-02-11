#include <iostream>
using namespace std;
float volume(float height,float width,float length);
float m(float height,float width,float length);
float c(float height,float width,float length);
float k(float height,float width,float length);
main()
{
 float height;
 float width;
 float length;
 float meter;
 float mili;
 float centi;
 float kilo;
 char out;

 cout << endl<<"AREA OF PYRAMID "<<endl;
 cout <<"Enter Height :";
 cin >> height;
 cout<<"Enter Width :";
 cin >> width;
 cout<<"Enter Length :";
 cin >> length;

 meter = volume(height,width,length);
 mili = m(height,width,length);
 centi =c(height,width,length);
 kilo =k(height,width,length);

 cout <<"Press '1' for volume in milimeters"<<endl;
 cout <<"Press '2' for volume in centimeters"<<endl;
 cout <<"Press '3' for volume in meters"<<endl;
 cout <<"Press '4' for volume in kilometers"<<endl;
 cin >> out;
 
 if (out == '1')
   {
    cout<<"volume is "<<mili<<" milimeter cube"<<endl;
   }
 if (out == '2')
   {
    cout<<"volume is "<<centi<<" centimeter cube"<<endl;
   }
 if (out == '3')
   {
    cout<<"volume is "<<meter<<" meter cube"<<endl;
   }
  if (out == '4')
   {
    cout<<"volume is "<<kilo<<" kilo meter cube"<<endl;
   }
 
}
float volume(float height,float width,float length)
 {
  float v = ((height * width * length) / 3);
  return v;
 }
float m(float height,float width,float length)
 { 
  float mi;
  mi = ((height*1000)*(width*1000)*(length*1000))/3;
  return mi;
 }
float c(float height,float width,float length)
 {
  float ce =   ((height*100)*(width*100)*(length*100))/3;
  return ce;
  
 }
float k(float height,float width,float length)
 {
  float ki =  ((height/1000)*(width/1000)*(length/1000))/3;
  return ki;
 }
 