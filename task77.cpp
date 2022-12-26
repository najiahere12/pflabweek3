#include <iostream>
using namespace std;
main()
{
string name;
int childp;
int adultp;
int adulticketsold;
int childticketsold;
int sumofadult;
int sumofchild;
int tsum;
int amountofcharity;
int charity;
int amountaftercharity;
cout<<"name of movie: ";
cin>>name;
cout<<"child ticket price: ";
cin>>childp;
cout<<"adult ticket price: ";
cin>>adultp;
cout<<"number of child tickets sold: ";
cin>>childticketsold;
cout<<"number of adult tickets sold: ";
cin>>adulticketsold;
sumofchild = childp*childticketsold;
sumofadult = adultp*adulticketsold;
cout<<"total amount: ";
tsum = sumofchild+sumofadult;
cout<<tsum <<endl;
cout<<"charity amout please: ";
cin>>amountofcharity;
cout<<"amount after charity: ";
charity = (tsum*amountofcharity)/100;

amountaftercharity = tsum-charity;
cout<<amountaftercharity;

}
