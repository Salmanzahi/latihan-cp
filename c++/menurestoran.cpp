/*
===========================================================================================================================================
INI ADALAH KODE PROGRAM BAHASA C BAGAIMANA CARA KERJA MEMESAN MENU DI SEBUAH RESTORAN

PROGRAM INI DILENGKAPI DENGAN:
1. FLEXIBLE MANAGEMENT DENGAN ADANYA FITUR CONFIGURATION DIHARAPKAN PENGGUNA AWAM BISA MENGUBAH MENU DAN HARGA DENGAN MUDAH
2. RINCIAN PEMBELIAN MEMUDAHKAN PEMBELI YANG MEMESAN APA SAJA MENU YANG DIBELI
3. ADANYA FITUR SALDO UNTUK MENGUJI APAKAH MENU YANG DIPESAN SESUAI SALDO ATAU TIDAK
===========================================================================================================================================
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int input, item, totalprice = 0, qty, saldo, pajak, diskon, diskon_minimum;
    string namarestoran, header, footer;

    
/*
===========================================================================================================================================
                                                             CONFIGURATION 
===========================================================================================================================================
*/
    // NAMA RESTORAN
     namarestoran = "RESTORAN SALMAN";

    //HEADER (BERISI DESKRIPSI RESTORAN)
    //GUNAKAN /n UNTUK ENTER (NEW LINE)
     header = "\n\nNo.Telp: 08123456789\nWebsite: www.algojo.com\nMedia sosial: ig:@ANIES1 x:@PRABOWO2 fb:@GANJAR3 yt: CAPRES";
   
    //FOOTER (BERISI PENUTUP SEBUAH STRUK, BISA UCAPAN TERIMA KASIH DAN SEBAGAINYA...)
     footer = "TERIMA KASIH, SELAMAT BERBELANJA";

    pajak = 20;
    diskon = 0;
    
    pair<string, int> 
    menu[] = {
        {"Nasi", 20000},
        {"Omelet", 30000},
        {"Nasi Goreng", 48000},
        {"Soto Ayam", 50000},
        {"Rendang", 70000},
        {"Gado-Gado", 60000},
        {"Sate", 45000},
        {"Pecel", 40000},
        {"Nasi Campur", 65000},
        {"Ayam Goreng", 38000},
        {"Bebek Goreng", 42000},
        {"Nasi Padang", 40000},
        {"Ayam Geprek", 32000},
        {"Rujak Cingur", 53000},
        {"Steak Ayam", 80000},
        {"Steak Sapi", 140000},
        {"Steak Sapi Premium", 250000},
        {"Air Mineral", 12000},
        {"Es Teh", 20000},
        {"Teh Hangat", 20000},
        {"Jus Jeruk", 25000},
        {"Susu Coklat", 35000},
        {"Cocktail", 75000},
        {"Vodka", 250000},
        {"Grape Wine", 950000},
        {"Whisky", 1500000},
        {"Tequila", 1200000},
        {"Sake", 850000}
    };

        int limiter = 100;
     
/*
===========================================================================================================================================
                                                             LINE OF CODE 
===========================================================================================================================================
*/

     //PANJANG ARRAY JANGAN DIUBAH !
        int jml_menu = sizeof(menu)/sizeof(*menu);

    // LIMITER
    const int maxSize = 100;
    vector<int> storeqty(maxSize, 0);
    vector<string> storemenu(maxSize, "");

    cout << "==========================================\n"
         << namarestoran << "\n=========================================="
         << endl;

    cout << "MAU PESAN APA ?\nDAFTAR MENU: " << endl;
    for (int i = 0; i < jml_menu; i++) {
        cout << i + 1 << ". " << menu[i].first << ": " << menu[i].second << endl;
    }
    
    for (int i = 0; i < limiter; i++) {
        cout << "Pilih menu: ";
        cin >> input;
        if(input == -1){
               cout << "==========================================\n"
                 << "             RINCIAN BELANJA\n==========================================\n" << endl;
              for (int j = 0; j < jml_menu; j++) {
                if (!storemenu[j].empty()) {
                    cout << "Nama menu: " << storemenu[j] << " || Kuantitas: " << storeqty[j] << " || Harga Satuan: " << menu[j].second << " || Total harga menu: " << storeqty[j] * menu[j].second << "\n------------------------------------------"
                         << endl;
                }
            }
            cout << "Subtotal: " << totalprice << endl;
            cout << "Pajak: " << pajak << "%" << endl;
            cout << "Diskon: " << diskon << "%" << endl;
            int finalprice = totalprice + (totalprice*pajak/100) - (totalprice*diskon/100);
            cout << "Total Akhir: " << finalprice << endl;
            cout << "Input Pembayaran: ";
            cin >> saldo;
            if ( saldo >= finalprice){
                cout << "==========================================\n"
                 << "            STRUK BELANJA\n==========================================\n" << namarestoran << header << "\n==========================================\nRINCIAN MENU\n=========================================="
                 << endl;
              for (int j = 0; j < jml_menu; j++) {
                if (!storemenu[j].empty()) {
                    cout << "Nama menu: " << storemenu[j] << " || Kuantitas: " << storeqty[j] << " || Harga Satuan: " << menu[j].second << " || Total harga menu: " << storeqty[j] * menu[j].second << "\n------------------------------------------"
                         << endl;
                }
            }
             cout << "Subtotal: " << totalprice << endl;
             cout << "==========================================" << endl;
              cout << "Pajak: " << pajak << "%" << endl;
             cout << "==========================================" << endl;
              cout << "Diskon: " << diskon << "%" << endl;
             cout << "==========================================" << endl;
              cout << "Total Akhir: " << finalprice << endl;
              cout << "==========================================" << endl;
              cout << "Input Pembayaran: " << saldo << endl;
              cout << "==========================================" << endl;
               saldo -= finalprice;
              cout << "Kembalian: " << saldo << endl;
              cout << "==========================================\n" << footer << "\n==========================================";
                break;
                } else {
                    cout << "Input Pembayaran yang anda masukkan tidak cukup :(" << endl;
                    break;
                }
                
            }
        if (input >= 1 && input <=  jml_menu) {
            cout << "Jumlah pesanan: ";
            cin >> qty;
            if (qty >= 0) {
                totalprice += qty * menu[input - 1].second;
                storeqty[input - 1] = qty;
                storemenu[input - 1] = menu[input - 1].first;
                cout << "Anda memesan " << qty << " porsi " << menu[input - 1].first << endl;
            } else {
                cout << "Jumlah pesanan tidak valid" << endl;
                i -= 1;
            }
        } else {
            cout << "Menu tidak tersedia / tidak valid" << endl;
            i -= 1;
        }
    } 


    return 0;
}
