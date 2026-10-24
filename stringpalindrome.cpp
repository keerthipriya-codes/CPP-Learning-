#include <iostream>
#include <string>
using namespace std;
int main() {
    string name = "level";
    string rev = "";
    for (int i = name.length() - 1; i >= 0; i--) {
        rev = rev + name[i];
    }
    if (rev == name) {
        cout << "Palindrome";
    } else {
        cout << "Not a palindrome";
    }
    return 0;
}