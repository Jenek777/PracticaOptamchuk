/* 468. —оставить процедуру, в результате обращени€ к которой, из первой заданной строки удал€етс€ символ,
принадлежащий и второй заданной строке.*/
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
    char s1[] = "аюбвг";
    char s2[] = "ью€";
 
    if(str(s1, s2) == NULL){
 cout << 1 << " строке не принадлежит ни один символ со второй "<< endl;

 cin.get();}
 else 
 {
 cout << " одной со строк принадлежит символ со второй" << endl;  
}
    system("pause");
    return 0;
}
