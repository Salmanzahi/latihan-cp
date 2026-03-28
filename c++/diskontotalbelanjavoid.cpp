#include <iostream>
using namespace std;
// gak pake kembalian

void totaldiskon(double price, double discount) {
    cout << price - (price * discount / 100) << endl;

}

int main() {
    double x, y;

    
    cout << "Enter the price: ";
    cin >> x;
    cout << "Enter the discount percentage: ";
    cin >> y;

    totaldiskon(x,y);

    return 0;
}
