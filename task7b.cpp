#include <iostream>
using namespace std;
int main()
{
double bit;
double byte=1024;
double kb=1024;
double mb=1024;
cout<<"Enter bit: ";
cin>>bit;
byte = bit/8;
cout<<"byte =  "<<byte;
kb = byte/1024;
cout<<"  kilobyte =  "<<kb;
mb = kb/1024;
cout<<"  megabyte =  "<<mb;
}
