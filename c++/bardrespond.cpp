#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int pilih, max;

    cout << "=====================\nQUIZ MAKER\n\n1. Membuat kuis\n2. Melihat kuis yang dibuat\n3. Mulai kerjakan\n=====================" << endl;
    cin >> pilih;
    if (pilih == 1){
        cout << "Tentukan jumlah max quiz !: ";
        cin >> max;
        vector<string> soal(max);
        vector<vector<string>> pilihan(max, vector<string>(2));
        vector<string> kunci(max);

        for (int i = 0; i < max; i++){
            cout << "Masukkan soal ke-" << i+1 << ": ";
            cin.ignore();
            getline(cin, soal[i]);

            cout << "Masukkan pilihan jawaban A: ";
            getline(cin, pilihan[i][0]);

            cout << "Masukkan pilihan jawaban B: ";
            getline(cin, pilihan[i][1]);

            cout << "Masukkan kunci jawaban (A/B): ";
            cin >> kunci[i];
        }
        cout << "Quiz berhasil dibuat!\n";
    } else if (pilih == 2) {
        for (int i = 0; i < max; i++){
            cout << "Soal " << i+1 << ": " << soal[i] << endl;
            cout << "A. " << pilihan[i][0] << endl;
            cout << "B. " << pilihan[i][1] << endl;
            cout << "Kunci: " << kunci[i] << endl;
        }
    } else if (pilih == 3) {
        int skor = 0;
        for (int i = 0; i < max; i++){
            cout << "Soal " << i+1 << ": " << soal[i] << endl;
            cout << "A. " << pilihan[i][0] << endl;
            cout << "B. " << pilihan[i][1] << endl;

            string jawaban;
            cout << "Masukkan jawaban Anda (A/B): ";
            cin >> jawaban;

            if (jawaban == kunci[i]) {
                cout << "Jawaban Anda benar!\n";
                skor++;
            } else {
                cout << "Jawaban Anda salah.\n";
            }
        }
        cout << "Skor Anda: " << skor << " dari " << max << endl;
    }

    return 0;
}
