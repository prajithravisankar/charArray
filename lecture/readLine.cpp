#include <iostream>
using namespace std;

int main() {
    // for string if we need to read string with spaces in it "I am Prajith"
    // we need to use this: 
    string s1;
    getline(cin, s1);
    cout << "string input: " << s1 << endl;

    // for char array it is slightly different
    char c1[13];
    cin.getline(c1, 13);
    cout << "character array input: " << c1 << endl;

    /* this is the output for this program. 
    I am Prajith
    string input: I am Prajith
    I am Prajith
    character array input: I am Prajith
     */

    // we can read array of strings
    string stringArray[3];
    for (int i = 0; i < 3; i++) {
        cout << "enter " << i + 1 << ": ";
        getline(cin, stringArray[i]);
    }

    for (int i = 0; i < 3; i++) {
        cout << stringArray[i] << " ";
    }

    return 0;
}