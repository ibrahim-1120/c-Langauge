/*Write a C++ program to check if a given string is a palindrome (reads the same
forwards and backwards).*/


#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, reversed = "";

 
    cout << "Enter a string: ";
    cin >> str;

   
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }

    
    if (str == reversed) {
        cout << "The string \"" << str << "\" is a palindrome." << endl;
    } else {
        cout << "The string \"" << str << "\" is not a palindrome." << endl;
    }

   ;
}

