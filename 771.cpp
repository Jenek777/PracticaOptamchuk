/* 771. �� ���� ������ ��� ������� r, ������������� �� �������� ��������� r (r<1). ����� ���������� �� ������ ���� �� ����������� ����.*/

#include<iostream>
#include<math.h>
using namespace std;
main()
{
float r, p , h, V;
cout << "enter radius, altitude, density" << endl;
cin >> r >> h >> p;

if (p <= 1.0)
{
      V=p*h*h*(((3*r)-h)/3);
      cout << V << endl;
}
else
{
    cout << "enter true density \n";
}
  system("pause");
    return 0;
}
