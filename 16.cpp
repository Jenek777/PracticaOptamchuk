/* 16.	��������� �������� �����ii�=f(x) �� ����i��� [a,b] 
�  ������  h �������������� ��� ���������� �������� �����ii �i���������-�����i�.
y = exp(x-0.8)/tg(3x), a = -2pi, b = 2pi, h = 0.8       
*/
#include <iostream>
#include <cmath>

using namespace std;
const double Pi = 3.14;
int main ()
{
    setlocale(LC_ALL, "Russian");
    double a = -2*Pi;
    double b = 2*Pi;
    double h = 0.8; 
if( a!= 0&& b!=0)
    {
        for (double x = a; x <= b; x += h) 
        cout << "y = " << exp(x-0.8)/tan(3*x) << endl;
    }
else 
 cout << "������� ���������� ��������" << endl;
    system("pause");
    return 0;
}
