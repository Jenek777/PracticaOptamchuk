/* 3. ќпределить значение z Ч max(a, 2b) Х max(2a - b, b),
где тах(л;, у) есть максимальное из чисел х, у. ѕри решении
задачи:
а) не использовать функцию шах;
б) определить и использовать функцию шах.*/
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
    cout << "¬ведите  a, b" << endl;
    cin >> a ;
    cin>> b;
    z = max(a,2*b) + max(2*a-b,b);
    cout << "max(a,2*b) + max(2*a-b,b)= "<< z << endl;
    system("pause");
    return 1;
}
