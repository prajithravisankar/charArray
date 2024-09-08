#include <iostream>
using namespace std;

int main() {
    // compress
    // ccccDDDxxxxxe -> c4_D3_x5_e1

    //!!!!!!!!!!!!!!!!!!!!!!INCOMPLETE!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    cout << "enter string: ";
    string str;
    cin >> str;

    char frequency[150] = {0};
    for (int i = 0; i < str.size(); i++) {
        frequency[str[i]]++;
    }

    for (int i = 0, count = 0, skip = 0; i < str.size(); i++) {
        if (i != 0 && str[i - 1] == str[i]) {
            skip += 1;
            continue;
        }
        cout << (char) str[i] << (int) frequency[str[i]];
        count += 1;

        if (count == skip) {
            continue;
        } else {
            cout << "_";
        }
    }

    return 0;
}