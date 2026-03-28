#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    for (int i = x; i = 1; i--){
        for (int j = 0; j < i-1; j++){
            cout << " ";
        }
        for (int k = 0; k < x-(i-1); i++){
            cout << "*";
        }
        cout << endl;
    }
}