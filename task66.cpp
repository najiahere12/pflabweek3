#include <iostream>
using namespace std;
main()
{
float sizeofbag;
float costbag;
float areacovered;
float perpoundcost;
float perunitarea;
cout <<"cost of bag: ";
cin>>costbag;
cout<<"size of fertilizer bag per pound: ";
cin>> sizeofbag;
cout<<"area in sqaure feet covered by a bag: ";
cin>>areacovered;
cout<<"cost of fertilizer bag per pound: ";
perpoundcost = costbag/sizeofbag;
cout<<perpoundcost << endl;
cout<<"cost of fertilizing the area per squarefoot: ";
perunitarea = costbag/areacovered;
cout<<perunitarea;
}
