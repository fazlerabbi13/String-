
#include <iostream>
#include <string.h>
using namespace std;


int main()
{
    
    string str = "GeeksforGeeks";

    // The constructor of string will set it to the
    // C-style string,
    // which ends at the '\0'

    // size of string object Using while loop
    // while 'NOT NULL'
    int i = 0;
    while (str[i])
        i++;
    cout << i << endl;

    return 0;
}