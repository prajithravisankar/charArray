#include <iostream>
using namespace std;

int main() {
    // grouping
    // 11222aaabb -> 11 222 aaa bb
    // abaab2e22d -> 222 aaa bb d e

    cout << "enter string: ";
    string str;
    cin >> str;

    char frequency[150] = {0};
    for (int i = 0; i < str.size(); i++) {
        frequency[str[i]]++;
    }

    for (int i = 0; i < 150; i++) {
        if (frequency[i] == 0) { // if this character is not in the string skip this loop.
            continue;
        }
        while(frequency[i]) { // until we exhaust the character keep printing it. 
            cout << (char) i;
            frequency[i]--;
        }
        if (frequency[i] == 0) { // if we have printed and exhausted the character... space
            cout << " ";
        } 
    }

    return 0;
}