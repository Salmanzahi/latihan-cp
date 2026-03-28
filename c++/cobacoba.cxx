
#include <iostream>
using namespace std;

int main() {
    char operatorSymbol;
    double num1, num2, choice, hasil;

    // Meminta pengguna memasukkan operator dan dua angka
    cout << "Masukkan angka pertama: ";
    cin >> num1;
    cout << " Masukkan operator (+, -, *, /): ";
    cin >> operatorSymbol;
    cout << "Masukkan angka kedua: ";
    cin >> num2;
    cout << "mengeksekusi operasi:  " << num1 << operatorSymbol << num2 << endl;

    // Menghitung hasil berdasarkan operator yang dimasukkan
    switch (operatorSymbol) {
        case '+':
            hasil = num1 + num2;
            break;
        case '-':
            hasil = num1 - num2;
            break;
        case '*':
            hasil = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                hasil = num1 / num2;
            } else {
                cout << "Error: Tidak bisa melakukan pembagian dengan 0." << endl;
                return 1; // Keluar dari program dengan kode error
            }
            break;
        default:
            cout << "Error: Operator tidak valid." << endl;
            return 1; // Keluar dari program dengan kode error
    }

    // Menampilkan hasil perhitungan
    cout << "Hasil: " << hasil << endl;

    return 0; // Program selesai tanpa masalah
}