#include <vector>
#include <utility>
#include <iostream>
using namespace std;

int main() {
    vector<pair<string, int>> test;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        string str;
        int num;
        cout << "Enter string and integer pair: ";
        cin >> str >> num;
        test.push_back({str, num});
    }
    cout << "The pairs are: ";
    for(const auto &pair : test) {
        cout << "(" << pair.first << ", " << pair.second << ") ";
    }
    return 0;
}
