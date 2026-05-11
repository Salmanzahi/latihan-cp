#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "lorem ipsum dolor sit amet platea sapien eu. primis suscipit dapibus tellus adipiscing dolor eu erat. sollicitudin ac eros accumsan duis ullamcorper hac odio imperdiet.";

    int total_vokal = 0;

    for (char c: s) {
        char m = s[c];
        if ( m== 'a' || m == 'i' || m == 'u' || m == 'e' || m == 'o') {
            total_vokal++;
        }
    }

    cout << total_vokal << endl;
}
