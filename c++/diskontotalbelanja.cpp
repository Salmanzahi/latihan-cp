#include <iostream>
using namespace std;

// pake kembalian

double totaldiskon(double price, double discount) {
    int d;
    d = price - (price * discount / 100);

    return d;
}

int main() {
    double x, y;

    
    cout << "Enter the price: ";
    cin >> x;
    cout << "Enter the discount percentage: ";
    cin >> y;

    
    double discountedPrice = totaldiskon(x, y);

  
    cout << "The price after discount is: " << discountedPrice << endl;

    return 0;
}
