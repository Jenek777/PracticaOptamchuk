/*5.	Після введення з клавіатури довільного рядка визначити 
і вивести на екран кількість латинських літер у ньому.*/
#include <iostream>
#include <string.h>
using namespace std;
main()
{
    char text[] = " Practica is not good. 3 lessons every day. це ужас";
 
    int size = strlen (text);
 
    char** temp_arr = new char*[size];
 
    for(int i=0;i<size;i++)
        temp_arr[i] = new char[2];
 
    for(int i=0;i<size;i++)
    {
        temp_arr[i][0] = ' ';
    }
 
    int counter = 0;
        for(int i=0;i<size;i++)
        {
            bool flag = true;
            for(int b=0;b<size;b++)
            {
                
                if ( temp_arr[b][0] == *(text+i) )
                {
                    temp_arr[b][1]++;
                    flag = false;
                    break;
                }   
                
            }
            if(flag == true)
            {
                temp_arr[counter][0] = *(text+i);
                temp_arr[counter][1] = 1;
                counter++;
            }
        }
 
    for(int i=0;i<counter+1;i++)
    {
        cout << i << ". " << " bykva    " << temp_arr[i][0] << "  vstrechalas  " << (int)temp_arr[i][1] << "  raz;" << endl;
    }
    
    for(int i=0;i<size;i++)
        delete [] temp_arr[i];
    delete [] temp_arr;
    system("pause");
    return 0;
    
}
