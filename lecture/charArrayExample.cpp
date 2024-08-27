#include <iostream>
using namespace std;

int main() {
    
    // for integer arrays we write the number of elements in the array as the size of array
    int integerArray[5] = {1, 2, 3, 4, 5}; // if there are 5 elements in the array we write 5 for the size

    // but for charArray we write the 'number of elements + 1' in the array as the size of the array
    char characterArray[6] = {'a', 'b', 'c', 'd', 'e'};
    // or we can just give the string instead of an array style
    char characterArray2[6] = "abcde";
    string stringAsCharArray = "abcde";

    // will give same output
    cout << characterArray << endl;
    cout << characterArray2 << endl;
    cout << stringAsCharArray << endl;
    cout << "all of these produces same output" << endl;


    // the null character or terminator is a special character where when the terminal sees that it will stop executing. 
    char name1[4];
    name1[0] = 'p';
    name1[1] = 'r';
    name1[2] = 'a';
    name1[3] = '\0'; // this is the null character this is internally implied even if we don't give the last thing
    cout << name1 << endl;

    char name2[5];
    name2[0] = 's';
    name2[1] = '\0'; // this is the end of execution after seeing null character it moves on. 
    name2[2] = 'i'; // won't be executed
    name2[3] = 'j'; // won't be executed
    name2[4] = '\0'; // won't be executed
    cout << name2 << endl;
    cout << "here we are " << endl;

    return 0;
}