#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
int n;
cout << "������� ������� n:" << endl;
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
    // ��������� �������
for (int i = 0; i < n; i++)
{
for (int j = 0; j < n; j++)
{
cout << i << " ������" << " " << j << " �������" << ": ";
cin >> a[i][j];
    b[i][j] = a[i][j]; // ������� � = ������� b
    c[i][j] = 0;
}
}
// ����������� �������
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
