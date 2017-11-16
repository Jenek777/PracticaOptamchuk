/*252 Даны натуральное число...*/
#include<algorithm>
#include<iostream>
using namespace std;
main()
{
   const char s[] = "++sdf*5**kj+--hg-";
   int total = 0;
   int n;
cout << "The string contains " << ( n = count( s, s + sizeof( s ) - 1, '+' )  ) << " plus signes\n" << endl;
   total += n;
cout << "The string contains " << ( n = count( s, s + sizeof( s ) - 1, '*' ) )  << " asterisk signes\n" << endl;
   total += n;
cout << "The string contains " << ( n = count( s, s + sizeof( s ) - 1, '-' ) )  << " minus signes\n" << endl;
   total += n;
 
cout << "Total number of the signs = " << total << endl;
   system("pause");
   return 0;
}
