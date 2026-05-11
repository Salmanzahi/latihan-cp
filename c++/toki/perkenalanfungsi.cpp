#include <iostream>
using namespace std;

int biaya(int total_bebek) {
    int harga_bebek;
       if (total_bebek < 10) {
            return harga_bebek = 100000*total_bebek;
        } else if (total_bebek >= 10 && total_bebek <= 50 ) {
           return harga_bebek = 75000*total_bebek;
        } else {
            return harga_bebek = 50000*total_bebek;
        }
    
}

int main() {
    int jantan[4] = {0, 10, 50, 60};
    int betina[4] = {7, 80, 9, 40};

    for (int i = 0; i < 4; i++) {
        int biaya_jantan = biaya(jantan[i]);
        int biaya_betina = biaya(betina[i]);

        cout << biaya_jantan + biaya_betina << endl;
    }
}
