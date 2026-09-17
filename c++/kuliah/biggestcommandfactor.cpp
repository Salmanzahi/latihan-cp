#include <iostream>

using namespace std;


int BiggestcommonFactor(int n, int k){
    int biggestfactor = 1;
    int greatest_num = (n>k) ? n : k;
    // cout << greatest_num;

    for ( int i=1; i <= greatest_num; i++ ){
        if ( n % i == 0 && k % i == 0){
            if ( i > biggestfactor) {
                biggestfactor = i;
            }
        }

    }
    cout << biggestfactor;
}


int main(){
    int n, k;
cin >> n >> k;
BiggestcommonFactor(n, k);

}

