#include <iostream>

using namespace std;


int commonFactor(int n, int k){
    int greatest_num = (n>k) ? n : k;
    // cout << greatest_num;

    for ( int i=1; i <= greatest_num; i++ ){
        if ( n % i == 0 && k % i == 0){
            cout << i << endl;
        }

    }
}


int main(){
    int n, k;
cin >> n >> k;
commonFactor(n, k);

}

