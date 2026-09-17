# include <iostream>

using namespace std;

int main(){
    int n, digit_product;
    digit_product = 1;
    cin >> n;
    while (n / 10 >  0){
        digit_product*= n%10;
        n = n / 10;
    }
cout << digit_product << endl;
}

