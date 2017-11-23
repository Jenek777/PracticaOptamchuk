/*23.	Після введення з клавіатури рядками деяких прізвищ і поруч з ними віку (рік народження)
 видати на екран список осіб, народжених за останні N років і їх вік (років). N увести з клавіатури.
*/
#include <iostream>
using namespace std;
 
main()
{
setlocale(LC_ALL, "Russian");
    int N, k;
    int i=0;
    cout << "Введите количество людей : ";
    cin >> k;
    int *year=new int[k];
    string *surname=new string[k];
 for (int i=0;i<k;i++) 
    {
        cout <<"Введите фамилию и возраст"<<endl;
        cin >>surname[i]>>year[i];
    }
  cout << "Введите N:" <<endl;
  cin >> N;
 
for (int i=0;i<k;i++){
if (year[i]<= N)
cout<<"За N лет родился(ась): "<< surname[i]<< ", "<<year[i]<< "лет" <<endl;
}
     system ("pause");
    return 0;
}
