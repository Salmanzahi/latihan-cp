#include <iostream>
#include <cmath>

using namespace std;

int f(int A, int B, int x){
    return abs(A*x + B);
}
int main(){
    // tentukan nilai utebeka jika A = 1, B = 1, K = 5, x = 1
   
    int A, B, K, x, utebeka, q;
    cin >> A >> B >> K >> x;
    for (int i=0;i<K;i++){
       x = f(A,B,x);
    }

    utebeka = x;

}

     
    // bool condition = p > q;
    // cout << p;


