#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string name1, name2;

    cout << "Masukkan nama pertama: ";
    getline(cin, name1);

    cout << "Masukkan nama kedua: ";
    getline(cin, name2);

    // Inisialisasi seed untuk mendapatkan nilai acak yang berbeda setiap kali program dijalankan
    srand(time(0));

    // Menghasilkan persentase cinta secara acak antara 0% hingga 100%
    int lovePercentage = rand() % 101;

    cout << "\n=====================================\n";
    cout << "          LOVE METER RESULT          \n";
    cout << "=====================================\n";
    cout << "   " << name1 << " dan " << name2 << " memiliki persentase cinta sebesar " << lovePercentage << "%.\n";
    cout << "=====================================\n";

return main();

}
