/* 8.	Створити програму розрахунку математичного виразу G = ((sin(a)^8)+ (sin(b)^8))/ (sin(c)^8)*/

#include<iostream>
#include<math.h>
using namespace std;
main()
{
double a,b,c,G;
cout << "enter a, b,c" << endl;
cin >> a;
cin >> b;
cin >> c;

if (c != 0)
{
      G = (pow ((sin(a)),8)+ pow ((sin(b)),8))/ pow ((sin(c)),8);
      cout << "G = (pow ((sin(a)),8)+ pow ((sin(b)),8))/ pow ((sin(c)),8) = " << G << endl;
}
else
{
    cout << "enter true a,b,c \n";
}
  system("pause");
    return 0;
}
