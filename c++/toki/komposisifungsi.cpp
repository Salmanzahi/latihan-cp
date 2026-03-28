#include <iostream>
#include <cmath>

using namespace std;

int fungsi(int A, int B, int x){
    return abs(A*x + B);
}
int main(){
    int A, B, K, x;
    cin >> A >> B >> K >> x;
    // fungsi f(x) = abs(Ax + B)4
    // compose fungsi sebanyak k kali

    for (int i=0;i<K;i++){
       x = fungsi(A,B,x);
    }
    cout << x;

}


