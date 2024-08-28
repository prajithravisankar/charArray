#include <iostream>
using namespace std;

int main() {
    // ignore upper case letters
    // AAaaPPPPppLLeeee 
    // -> 
    // a = 2
    // p = 2
    // e = 4

    // GOOD -> "no lower case letter found"
    cout << "enter a string with upper case and lower case: ";
    string s1;
    cin >> s1;

    // first form a frequency array of all the characters... a estimate of 150 is more than enough because 'z' and 'Z' both below 150. 
    int frequencyArray[150] = {0}; // initialize all of them to be 0. 

    for (int i = 0; i < s1.size(); i++) {
        frequencyArray[s1[i]] += 1; // this frequencyArray[s1[i]] where s1[i] will be a character because string is a array of character. 
        // lets say we get 'c' for s1[i], then frequencyArray['c'] will be 99 ... frequencyArray[99] which will be incremented from 0 to 1. 
    }

    // this is the correct way to do this. 
    for (char c = 'a'; c <= 'z'; c++) { // or we can do int i = 'a'; i <= 'z'; i++..... but we have to remember....
        if (frequencyArray[c]) {
            cout << c << " = " << frequencyArray[c] << endl; // we need to implicitly cast here cout << (char) i << " = " << frequencyArray[i]...
        }
    }


    // this is not the correct way to print the output. Always print what the user wants, not the correct one. Mine is not correct too. 
    // for (int i = 0; i < s1.size(); i++) {
    //     if ('a' <= s1[i] && s1[i] <= 'z') {
    //         cout << s1[i] << " = " << frequencyArray[s1[i]] << endl;
    //     }
    // }
    // a = 2
    // a = 2
    // p = 2
    // p = 2
    // e = 4
    // e = 4
    // e = 4
    // p = 2
    // p = 2
    // e = 4
    // e = 4
    // e = 4
    // e = 4

    return 0;
}