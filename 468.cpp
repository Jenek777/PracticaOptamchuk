/* 468. ��������� ���������, � ���������� ��������� � �������, �� ������ �������� ������ ��������� ������,
������������� � ������ �������� ������.*/
#include <iostream>
#include <string>
using namespace std;
const char* str(const char* s1, const char* s2)
{
setlocale(LC_ALL, "Russian");
    int c;
    const char* p;
    while(*s1)
    {
        p = s2;
        c = *s1;
        while(*p && (*p != c))
            ++p;
 
        if(!*p)
            ++s1;
        else
            break;
    }
    return (*s1) ? s1 : NULL;
}
 
int main()
{
    char s1[] = "�����";
    char s2[] = "���";
 
    if(str(s1, s2) == NULL){
 cout << 1 << " ������ �� ����������� �� ���� ������ �� ������ "<< endl;

 cin.get();}
 else 
 {
 cout << " ����� �� ����� ����������� ������ �� ������" << endl;  
}
    system("pause");
    return 0;
}
