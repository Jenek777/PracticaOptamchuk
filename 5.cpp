#include <iostream>
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
 int n;
 int k=0;
 cout << "������� ����������� ����� �����" <<endl;
cin >> n;
   while (n)
   {
      k+=n&1;
      n>>=1; // ����� ������ �� 1 �������
   }
cout << "���������� ������ � ����� = " << k << endl;
   system ("pause");
   return 0;
}
