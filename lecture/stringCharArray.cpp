#include <iostream>
using namespace std;

int main() {
    // internally string is just a char array;
    string s1 = "prajith";
    cout << s1 << endl;
    int sizeS1 = s1.size(); // string member function
    for (int i = 0; i < sizeS1; i++) {
        cout << s1[i]; // now this is accessing each character and printing 
        // character by character
    }
    return 0;
}