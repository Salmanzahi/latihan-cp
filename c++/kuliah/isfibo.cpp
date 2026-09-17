# include <iostream>
using namespace std;


int is_fibonacci( int n){
    int l = 0, r = 1, sum = 0;
    while ( sum < n ){
        sum = l + r;
        l = r;
        r = sum;
    }

    if ( n == sum){
        return true;
    } else {
        return false;
    }


}


int main (){
    int n;
    cin >> n;
    cout <<  is_fibonacci(n) << endl;
}