
#include <iostream>
 
 
using namespace std;
 
int main()
{
 int jumlah_bebek,hasil_bagi, masing_masing_bebek, sisa_bebek;
 cin >> jumlah_bebek >> masing_masing_bebek;
 
 sisa_bebek = jumlah_bebek/masing_masing_bebek;
 
 
 hasil_bagi = jumlah_bebek%masing_masing_bebek;
 
 
 cout << "masing-masing " << sisa_bebek << endl;
 
 cout << "bersisa " << hasil_bagi << endl;
}
