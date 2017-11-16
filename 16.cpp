/* 16.	Визначити значення функцiiу=f(x) на промiжку [a,b] 
з  кроком  h використовуючи для обчислення значення функцii пiдпрограму-функцiю.
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
 cout << "Введите правильные значения" << endl;
    system("pause");
    return 0;
}
