
#include <iostream>
using namespace std;

void relationalOperation(string s1, string s2)
{

    if (s1 != s2) 
    {
        cout << s1 << " is not equal to " << s2 << endl;
        if (s1 > s2)
            cout << s1 << " is greater than " << s2 << endl;
        else
            cout << s2 << " is greater than " << s1 << endl;
    }
    else
        cout << s1 << " is equal to " << s2 << endl;
}


int main()
{
    string s1("Hello");
    string s2("Hello world");
    relationalOperation(s1, s2);
    string s3("Fazle");
    string s4("Rabbi");
    relationalOperation(s3, s4);
    return 0;
}