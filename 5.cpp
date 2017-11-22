/* 5.	Знайти кількість одиниць в двійковому поданні цілого позитивного числа.*/
#include <iostream>
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
 int n;
 int k=0;
 cout << "Ââåäèòå íàòóðàëüíîå öåëîå ÷èñëî" <<endl;
cin >> n;
   while (n)
   {
      k+=n&1;
      n>>=1; // çäâèã âïðàâî íà 1 ïîçèö³þ
   }
cout << "Êîëè÷åñòâî åäèíèö â ÷èñëå = " << k << endl;
   system ("pause");
   return 0;
}
