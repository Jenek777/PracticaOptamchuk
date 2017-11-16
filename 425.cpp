/*425.даны действительные числа s,t. получить g(1.2,s)+g(t,s)-g(2*s-1, s*t)
, где g(a,b)= (a*a+b*b)/(a*a+2*a*b+3*b*b+4)
*/

#include <iostream>
#include <math.h>
#include <cstdlib>
 using namespace std;
 
double g(double a,double b) 
{
    
    
    return (a*a+b*b)/(a*a+2*a*b+3*b*b+4);
}
 
 
 main() {
   double s,t;
    cout << "enter s, t"<< endl;
    cin >> s;
    cin >> t;
    cout << "g = " << g(1.2,s)+g(t,s)-g(2*s-1, s*t) << endl;
    system("pause");
    return EXIT_SUCCESS;
}
