#include <iostream>
using namespace std;

int main() {
    // a a -> yes
    // abc a -> yes
    // abcdefg abde -> no
    // abcdefg abcdefg -> yes
    // abcdefg gfedcb -> no

    string input1, input2;
    cout << "enter input string 1 and 2 we check input 2 is prefix of input 1: ";
    cin >> input1 >> input2;

    if (input2.size() < input1.size()) {
        cout << "NO";
        return 0;
    }

    for (int i = 0; i < input2.size(); i++) {
        if (input2[i] != input1[i]) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}