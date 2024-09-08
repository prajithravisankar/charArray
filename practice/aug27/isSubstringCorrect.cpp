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
    for (int i = 0; i < (int) s1.size() - (int) s2.size() + 1; ++i) { // this size 1 - size 2 is nothing but it is a checkpoint to stop
    // at the end. if we have abcabbbce and abbc. we don't need to compare aabc with bce in the first string because at this point, 
    // string 1 is smalled than string 2 for making any comparison so we stop. 
        bool isMatch = true; // we initially set the is a substring assumption to be true. 

        // ?? still don't understand
        for (int j = 0; j < (int) s2.size() && isMatch; ++j) {
            if (s2[j] != s1[i + j]) {
                isMatch = false;
            }
        }

        // still don't understand. 
        if (isMatch) { // if the isMatch (substring is true) is still true after going through the for loop, we can get out of the program. 
            cout << "YES";
            return 0;
        }

        // else we just go for next character in the big string as a starting point, and then compare the small string from that point
        // whether that is the substring from that point on. 
    }


    cout << "NO";

    return 0;
}