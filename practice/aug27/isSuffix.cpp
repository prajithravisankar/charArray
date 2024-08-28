#include <iostream>
using namespace std;

int main() {
    // abcd abcd -> yes
    // abcdefg efg -> yes
    // abcdefg abefg -> no
    // abc c -> yes

    string s1, s2;
    cout << "enter string 1: ";
    cin >> s1;
    cout << "enter string 2: ";
    cin >> s2;

    if (s2.size() > s1.size()) {
        cout << "NO";
        return 0;
    }

    // make it a bit more readable naming i as bigStringsEnd and j as littleStringsEnd
    for (int i = s1.size(), j = s2.size(); j > 0; j--, i--) {
        if (s1[i] != s2[j]) { // equating this from back side
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}