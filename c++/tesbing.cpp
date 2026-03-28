#include <iostream>
using namespace std;

int main(){
    int input, item, totalprice = 0, qty, saldo;

    //LIST HARGA
    int prices[5] = {10000, 15000, 30000, 25000, 20000};
    string menu[5] = {"Nasi Goreng", "Soto Ayam", "Rendang", "Gado-gado", "Sate"};

    cout << "==========================================\n RESTORAN KAK TIRUP\n==========================================" << endl;
    cout << "Masukin saldonya ganteng" << endl;
    cin >> saldo;
    cout << "Oke kak saldomu adalah: " << saldo << endl;
    cout << "MAU PESAN BERAPA ITEM ? MAKSIMAL: 5 ITEM" << endl;
    cin >> item;
    cout << "MAU PESAN APA ?/\nMAKANAN\nMenu Makanan: \n1. Nasi Goreng: " << prices[0] << "\n2. Soto Ayam: " << prices[1] << "\n3. Rendang: " << prices[2] << "\n4. Gado - gado: " << prices[3] << "\n5. Sate: " << prices[4] <<  endl;
    
    for(int i = 0; i< item; i++){
        cout << "Pilih menu: ";
        cin >> input;
        if(input >= 1 && input <= 5){
            cout << "Jumlah pesanan (nyatakan dlm bentuk angka): ";
            cin >> qty;
            totalprice += qty * prices[input - 1];
            cout << "Anda memesan " << qty << " porsi " << menu[input - 1] << endl;
        } else {
            cout << "Menu tidak tersedia" << endl;
        }
    }

    cout << "Grandtotal: " << totalprice << endl;

    if(saldo < totalprice){
        cout << "Saldo tidak cukup!" << endl;
    } else {
        saldo -= totalprice;
        cout << "Pembayaran berhasil! Sisa saldo: " << saldo << endl;
    }

    return 0;
}
