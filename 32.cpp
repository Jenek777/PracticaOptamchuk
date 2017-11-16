/* 32 Даны три слова. Выяснить, является ли хоть одно из
них палиндромом («перевертышем»), т. е. таким, которое
читается одинаково слева направо и справа налево. (Определить функцию, позволяющую распознавать слова-палиндромы.)*/
#include<iostream>
#include<string.h>

using namespace std;

char proverka_polindroma(string word)
{
     int len = word.length();
     for (int i=0; i< len/2; i++)
     {
         if (word[i]!= word[len-i-1])
         {
         return false;
         }
return true;
}
}
main ()
{
    setlocale(LC_ALL, "Russian");
    string str;
cout << "Введите слово на проверку полиндрома: " <<endl;
cin >> str;
if (proverka_polindroma(str))
{
cout << " Слово - полиндром" <<endl;
}
else
{
    cout << "Не полиндром" <<endl;
}
system("pause");
return 0;
}
