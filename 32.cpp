/* 32 ���� ��� �����. ��������, �������� �� ���� ���� ��
��� ����������� (�������������), �. �. �����, �������
�������� ��������� ����� ������� � ������ ������. (���������� �������, ����������� ������������ �����-����������.)*/
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
cout << "������� ����� �� �������� ����������: " <<endl;
cin >> str;
if (proverka_polindroma(str))
{
cout << " ����� - ���������" <<endl;
}
else
{
    cout << "�� ���������" <<endl;
}
system("pause");
return 0;
}
