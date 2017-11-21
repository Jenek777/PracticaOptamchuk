/* Задача 698.
Умова: Дана квадратна матриця порядку n. Отримати матрицю А^2.
*/
#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
int n;
cout << "Порядок матрицы n:"  << endl;
cin >> n;
 
    int ** a = new int *[n];
    int ** b = new int *[n];
    int ** c = new int *[n];
 
for (int i = 0; i < n; i++)
    {
    a[i] = new int[n];
    b[i] = new int[n];
    c[i] = new int[n];
    }
    // заповнюємо матрицю
for (int i = 0; i < n; i++)
{
for (int j = 0; j < n; j++)
{
cout << i << " строка" << " " << j << " столбец" << ": ";
cin >> a[i][j];
    b[i][j] = a[i][j]; // матриця а = матриці b
    c[i][j] = 0;
}
}
// перемножуємо матрицю
for (int i = 0; i < n; i++)
    {
for (int j = 0; j < n; j++)
        {
for (int k = 0; k < n; k++)
            {
c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout << endl;
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
cout << c[i][j] << " ";
        }
        cout << endl;
    }
system("pause");}
