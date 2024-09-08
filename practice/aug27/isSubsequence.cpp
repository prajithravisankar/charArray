#include <iostream>

using namespace std;

int main() {
    // is subsequence: should be in the same increasing order
    // abcdefgh ag -> true
    // abcdefgh hc -> false
    // abcaadeh aae -> true
    // abcaadeh ca -> true
    // abcaadeh ac -> true
    // prajith ath -> true

    cout << "enter big string: ";
    string first;
    cin >> first;
    cout << "enter small string: ";
    string second;
    cin >> second;

    int isMatch = 0;
    for (int i = 0; i < first.size(); i++) {
        if (first[i] == second[isMatch]) { // if the first letter is small string matches
        // anywhere in the big string move to the next letter in the small string. 
        // we keep count of how many letters we move through the second string. If 
        // the count is equal to the second string we match its size which mean we 
        // have passed through second string entirely, so there is a sequence in the 
        // first string that is the same sequence as in second string. 
            isMatch++;
        }
    }

    if (isMatch == second.size()) {
        cout << "YES";
        return 0;
    } else {
        cout << "NO";
    }

    return 0;
}