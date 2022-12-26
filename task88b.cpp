#include <iostream>
using namespace std;
int main()
{
int value;
int mode1;
int div1;
int mode2;
int div2;
int mode3;
int mode4;
int div3;
int div4;
int sum;
cout<<"enter 4-digit value: ";
cin>>value;
mode1 = value%10;
div1 = value/10;


mode2 = div1%10;
div2 = div1/10;



mode3 = div2%10;
div3 = div2/10;



mode4 = div3%10;
div4 = div3/10;



sum = mode1+mode2+mode3+mode4;
cout<<sum;




}

