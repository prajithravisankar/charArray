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

    // string lower = "abcdefghijklmnopqrstuvwxyz";
    string lowerConvert = "YZIMNESTODUAPWXHQFBRJKCGVL";

    // string number = "0123456789";
    string numberConvert = "!@#$%^&*()";

    string input;
    cout << "enter a string input of lowercase, uppercase, and numbers: ";
    cin >> input;

    // this is my idea, there is another good idea using frequency array look at specialStringMappingSolution.cpp
    // 65 - 90 = A to Z
    // 97 - 122 = a to z
    // 48 - 58 = 0 to 9
    for (int i = 0; i < input.size(); i++) {
        if ('A' <= input[i] && input[i] <= 'Z') {
            cout << input[i];
        } else if ('a' <= input[i] && input[i] <= 'z') {
            int index = (int) input[i] - 97;
            cout << lowerConvert[index];
        } else {
            int index2 = (int) (input[i] - 48); // VERY IMPORTANT !!!!! '0' starts at 48
            cout << numberConvert[index2];
        }
    }

    return 0;
}