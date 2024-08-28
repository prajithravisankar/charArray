#include <iostream>
using namespace std;

int main() {
    // abcdefg a -> yes
    // abcdefg efg -> yes
    // abc abc -> yes
    // abcdefg cde -> yes
    // abcdefg abd -> no

    // !!!!! the solution works only if there is no repeating letters
    // when we try aabcd and aab it is not working


    // !!!!!!!!!!!!!!!!!!LOOK AT THE SUBSTRING ACTUAL ANSWER TOMORROW THIS IS NOT THE PROPER WAY TO DO THIS

    cout << "enter string 1: ";
    string s1, s2;
    cin >> s1;
    cout << "enter string 2: ";
    cin >> s2;

    if (s1.size() < s2.size()) {
        cout << "NO";
        return 0;
    }

    int getIndex;
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] == s2[0]) {
            getIndex = i;
        } 
    }

    for (int i = 0; i < s2.size(); i++) {
        if (s2[i] != s1[getIndex++]) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}