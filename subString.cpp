#include <iostream>
#include <string>
using namespace std;

int main() {
    
    
    string s = "Hello";

    // Extract two characters of s1 (starting
    // from index 3)
    string sub = s.substr(3, 2);

    cout << sub;
    return 0;
}