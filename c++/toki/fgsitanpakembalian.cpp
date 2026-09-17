#include <iostream>
#include <algorithm> // Dianjurkan untuk menyertakan ini untuk std::max

using namespace std;

int total_kandang = 10;
int bebek[11];

void kosongkan_kandang() {
    for (int i = 1; i <= total_kandang; i++) {
        bebek[i] = 0;
    }
}

void isi_bebek_ke_dalam_kandang(int awal, int akhir, int banyak_bebek) {
    for (int i = awal; i <= akhir; i++) {
        bebek[i] = bebek[i] + banyak_bebek; // Ditambahkan semicolon (;)
    }
}

int bebek_terbanyak_dalam_suatu_kandang() {
    int bebek_terbanyak = bebek[1];
    for (int i = 2; i <= total_kandang; i++) {
        // MEMPERBAIKI: Membandingkan dengan array 'bebek', bukan 'bebek_terbanyak'
        bebek_terbanyak = max(bebek_terbanyak, bebek[i]);
    }
    return bebek_terbanyak;
}

int main() {
    kosongkan_kandang();

    isi_bebek_ke_dalam_kandang(1, 8, 2);
    isi_bebek_ke_dalam_kandang(2, 9, 10);
    isi_bebek_ke_dalam_kandang(5, 6, 2);
    isi_bebek_ke_dalam_kandang(9, 10, 3);
    isi_bebek_ke_dalam_kandang(1, 4, 7);
    isi_bebek_ke_dalam_kandang(1, 4, 2);
    isi_bebek_ke_dalam_kandang(4, 8, 6);

    cout << bebek_terbanyak_dalam_suatu_kandang() << endl;
    return 0;
}