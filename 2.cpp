/*2. ���� ������, ���������� ���������� �����. ����� ���������� ����, ������������ � ����� �.*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int count = 0;
    string str = " bidocka budet bekat' i eto uzhas";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'b' && str[i-1] == ' ')
            count++;
    }
    cout << count << endl; ;
    system("pause");
    return 0;
}
