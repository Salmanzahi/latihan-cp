#include <iostream>
using namespace std;

void kalkulator (int x, string opt, int y) {
    if ( opt == "/") {
        float hasil = x/y;
        cout << "Hasil : " << hasil << endl;
    } else if ( opt == "*") {
        float hasil = x*y;
        cout << "Hasil : " << hasil << endl;
    }else if ( opt == "+") {
        float hasil = x+y;
        cout << "Hasil : " << hasil << endl;
    }else if ( opt == "-") {
        float hasil = x-y;
        cout << "Hasil : " << hasil << endl;
    }else if ( opt == "-") {
        float hasil = x-y;
        cout << "Hasil : " << hasil << endl;
    }else if (opt == "^"){
        float hasil = x^y;
        cout << "Hasil : " << hasil << endl;
    }
}

int main (){
    int x, y, choice;
    string opt;
    cout << "================================\n\nKALKULATOR SERBAGUNA\n\n1) KALKULATOR SEDERHANA\n1. Tambah +\n2. Kali *\n3. Kurang -\n4. Bagi /\n5. Pangkat ^\n7. Modulus %\n\n2) KALKULATOR KONVERSI PANJANG\n\n================================" << endl;
    cin >> choice;
    if(choice == 1)
{ 
    cin >> x >> opt >> y;
    kalkulator(x, opt, y);
    } else if(choice == 2 ){
        int choice2;
        cout << "Sintaks: <angka> <unit awal> <unit akhir>\nContoh: 5 cm dm" << endl;
        

    } 
}