/* 3. ���������� �������� z � max(a, 2b) � max(2a - b, b),
��� ���(�;, �) ���� ������������ �� ����� �, �. ��� �������
������:
�) �� ������������ ������� ���;
�) ���������� � ������������ ������� ���.*/
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

float  max(float x, float y)
{
    if (x >= y) 
    {
        return x;
    }
    else 
    {
        return y;
    }
}


int main() 
{
    setlocale(LC_ALL, "RUSSIAN");
 
    double a, b, z;
    cout << "�������  a, b" << endl;
    cin >> a ;
    cin>> b;
    z = max(a,2*b) + max(2*a-b,b);
    cout << "max(a,2*b) + max(2*a-b,b)= "<< z << endl;
    system("pause");
    return 1;
}
