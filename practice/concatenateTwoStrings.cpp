#include <iostream>
using namespace std;

int main() {

    // abcd efgh -> aebfcgdh
    // ab xyz -> axbyz
    // abc xy -> axbyc
    // a wxyz -> awxyz
    // abcd z -> azbcd

    // my idea
    string s1, s2;
    cout << "enter string1: ";
    getline(cin, s1);
    cout << "enter string2: ";
    getline(cin, s2);

    int maxLen = s1.size();
    maxLen = (s1.size() < s2.size()) ? s2.size() : s1.size();
    
    for (int i = 0; i < maxLen; i++) {
        // if index is less than our string 1 size print that character... this will take care of the remaining characters in a larger string
        if (i < s1.size()) {
            // if s1 is smaller than s2, this if block is skipped. same for the next if block. 
            cout << s1[i];
        }

        // if index is less than our string 2 size print that character... this will take care of the remaining characters in a larger string
        if (i < s2.size()) {
            cout << s2[i];
        }
    }

    return 0;
}