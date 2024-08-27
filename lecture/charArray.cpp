#include <iostream>
using namespace std;

int main() {
    // we can play with math and char
    char first = 'A'; // 65
    char last = 'Z'; // 90
    char smallFirst = 'a'; // 97
    char smallLast = 'z'; // 122
    for (int i = first; i <= last; i++) {
        // will print all the upper case characters
        cout << (char) i << endl;
    }
    for (int i = 97; i <= 122; i++) {
        // will print all the lower case characters
        cout << (char) i << endl;
    }

    // even if we give the number to variable we can get the char equivalent
    char someChar = 97; // this will be stored as 'a'
    cout << someChar; // produce a

    // this is a nice trick to remember
    // z = a + 26 - 1
    // Z = A + 26 - 1
    return 0;
}