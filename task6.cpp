#include <iostream>
using namespace std;
main()
{
float matric;
float intermediate;
float ecat;
float matp;
float ecatp;
float interp;
float aggregate;
float mw;
float iw;
float ew;
float sum;
cout<<"enter matric score: ";
cin>> matric;
cout<<"enter intermediate score: ";
cin>> intermediate;
cout<<"enter ecat score: ";
cin>> ecat;
matp = (matric*100)/1100;
cout<<endl;

interp = (intermediate*100)/550;
cout<<endl;

ecatp = (ecat*100)/400;
cout<<endl;

mw = (matp*10)/100;
iw = (interp*40)/100;
ew = (ecatp*50)/100;
sum = mw+iw+ew;
cout<<sum;


} 
