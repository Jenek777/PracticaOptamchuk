/*23.	ϳ��� �������� � ��������� ������� ������ ������ � ����� � ���� ��� (�� ����������)
 ������ �� ����� ������ ���, ���������� �� ������ N ���� � �� �� (����). N ������ � ���������.
*/
#include <iostream>
using namespace std;
 
main()
{
setlocale(LC_ALL, "Russian");
    int N, k;
    int i=0;
    cout << "������� ���������� ����� : ";
    cin >> k;
    int *year=new int[k];
    string *surname=new string[k];
 for (int i=0;i<k;i++) 
    {
        cout <<"������� ������� � �������"<<endl;
        cin >>surname[i]>>year[i];
    }
  cout << "������� N:" <<endl;
  cin >> N;
 
for (int i=0;i<k;i++){
if (year[i]<= N)
cout<<"�� N ��� �������(���): "<< surname[i]<< ", "<<year[i]<< "���" <<endl;
}
     system ("pause");
    return 0;
}
