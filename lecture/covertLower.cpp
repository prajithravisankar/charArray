#include <iostream>
using namespace std;

int main() {
    char c1 = 'D';
    if ('A' <= c1 && c1 <= 'Z') {
        c1 = c1 - 'A'; // this will give the number to add to lower case 'a' to get to lower case equivalent char
        c1 += 'a';
        cout << "the equivalent char in lower case: " << c1;
    } else if ('a' <= c1 && c1 <= 'z') {
        cout << "already a character" << endl;
    } else {
        cout << "not a character" << endl;
    }
    return 0;
}