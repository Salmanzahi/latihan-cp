#include <iostream>
#include <string>
#include <cctype> // Required for toupper()
using namespace std;

int main() {
    string s = "thequickbrownfoxjumpsoverthelazydog";
    string newstring;
    for (char c : s) {
        newstring = (char)toupper(c);
        // cout << newstring;
    }
    for (char c: newstring){
        if ( c == 'Z'){
            cout << 'A';
        } else {
            cout << c+1;
        }
    }


    // move it by +1
    cout << endl;
}
