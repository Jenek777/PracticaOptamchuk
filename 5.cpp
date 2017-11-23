/* 5.	Знайти кількість одиниць в двійковому поданні цілого позитивного числа.*/
#include <iostream>
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
 int n;
 int k=0;
 cout << "Введите натуральное целое число" <<endl;
cin >> n;
   while (n)
   {
      k+=n&1;
      n>>=1; // здвиг вправо на 1 позицію
   }
cout << "Количество единиц в числе = " << k << endl;
   system ("pause");
   return 0;
}
