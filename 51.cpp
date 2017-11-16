/* 51. Ћишние пробелы. 
ƒана строка, состо€ща€ из слов, разделенных пробелами. Ќапишите программу, удал€ющую лишние пробелы. ѕробел считаетс€ лишним, если он:
Х стоит в начале строки;
Х стоит в конце строки;
Х следует за пробелом.*/
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string str=" ogo  go  goshen'ki  ";
    if(str.at(0)==' ')//получение указанного символа с проверкой выхода индекса за границы
        str.erase(0,1);
    if(str.at(str.length()-1)==' ')
        str.erase(str.length()-1,1);
    for(int i=0;i<str.length()-1;i++)
    {
        if((str.at(i)==' ')&&(str.at(i+1)==' '))
            str.erase(i,1);
    }
    cout<<str<<endl;
    system("pause");
    return 0;
}
