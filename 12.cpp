/*12.	Ввести ціле число n (байт) і вивести число, 
отримане в результаті циклічного зсуву числа n на один розряд вліво, 
тобто старший біт переміщений в позицію молодшого, 
а всі інші біти зсуваються на один розряд вліво. 
Наприклад, якщо введено 130, відповіддю буде 5.
*/
#include <iostream>
#include <bitset>

using namespace std;

const unsigned int BYTE = 10; 
const unsigned int STEP = 1;  //  шаг здвигу

int main()
{
    bitset <BYTE> bit(130), part1, result;

    cout << "bit\t" << bit << endl; 
    
    part1 = bit << STEP; 
    cout << "part1\t" << part1 << endl;


    cout << "result\t"  << part1 << endl; // результат 
system("pause");
    return 0;
}
