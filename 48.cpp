/*48 �������� ����������� �������, ������������, �������� �� �������� ����������� ����� �������.*/
#include <iostream>
#include <conio.h>
 
using namespace std;
 
int Prime(unsigned long a)
{
   unsigned long i;
   if (a == 2)
      return 1;
   if (a == 0 || a == 1 || a % 2 == 0)
      return 0;
   for(i = 3; i*i <= a && a % i; i += 2)
      ;
   return i*i > a;
}
main()
{
      int a;
      setlocale(LC_ALL, "Russian");
      cout << "������� �: " << endl;
      cin >> a;
      cout << "1 - ����� ������, 0 - �� ������ \n" << Prime(a)  << endl;
      system("pause");
      return 0;
}
