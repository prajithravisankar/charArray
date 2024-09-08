#include <iostream>

using namespace std;

int main() {

    cout << "enter string1: ";
    string first;
    cin >> first;
    cout << "enter small string: ";
    string second;
    cin >> second;

    if (second.size() > first.size()) {
        cout << "NO";
        return 0;
    } else {
        bool isSubstring;
        for (int i = 0; i < first.size() - second.size() + 1; i++) {
            isSubstring = true;
            for (int j = 0; j < second.size(); j++) {
                // aabcd abc
                if (first[i + j] != second[j]) {
                    isSubstring = false;
                }
            }

            if (isSubstring == true) {
                cout << "YES";
                return 0;
            }
        }

        cout << "NO";
    }


    return 0;
}