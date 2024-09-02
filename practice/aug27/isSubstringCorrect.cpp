#include <iostream>

using namespace std;

int main() {
    // the second sequence should be there in the first sequence 
    // abcd a -> yes
    // abcd b -> yes
    // abcd c -> yes
    // abcd d -> yes
    // abcdabd abc -> yes
    // abcdabd abd -> yes
    // aabbcd ab -> yes
    // aabbcd aab -> yes
    // aababb abb -> yes
    // abcdefg ace -> no

    string s1, s2;

    cout << "enter first string: ";
    cin >> s1;
    cout << "enter second string: ";
    cin >> s2;


    // ?? slide s2 across s1 to check every possible position where s2 could be a substring of s1
    for (int i = 0; i < (int) s1.size() - (int) s2.size() + 1; ++i) {
        bool isMatch = true;

        // ?? still don't understand
        for (int j = 0; j < (int) s2.size() && isMatch; ++j) {
            if (s2[j] != s1[i + j]) {
                isMatch = false;
            }
        }

        // still don't understand. 
        if (isMatch) {
            cout << "YES";
            return 0;
        }
    }


    cout << "NO";

    return 0;
}