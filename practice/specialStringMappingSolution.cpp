#include <iostream>
using namespace std;

int main() {
    // special string mapping
    // acMNmn39 -> YIMNPW$)

    // if lower case map this way
    // abcdefghijklmnopqrstuvwxyz
    // YZIMNESTODUAPWXHQFBRJKCGVL

    // if it is a digit
    // 0123456789
    // !@#$%^&*()

    // if it is a capital letter do not convert

    string from = "abcdefghijklmnopqrstuvwxyz0123456789";
    string to = "YZIMNESTODUAPWXHQFBRJKCGVL!@#$%^&*()";

    string input;
    cout << "enter a string input of lowercase, uppercase, and numbers: ";
    cin >> input;

    // this is professor's idea
    char letterArray[150] = {0};

    for (int i = 0; i < from.size(); i++) {
        letterArray[from[i]] = to[i]; // instead of 0 it now has a character (or an ascii integer code)
    }

    for (int i = 0; i < input.size(); i++) {
        if ('A' <= input[i] && input[i] <= 'Z') {
            cout << input[i];
        } else {
            cout << letterArray[input[i]]; // for '0' it has '!' in it it will be printed
        }
    }

    return 0;
}