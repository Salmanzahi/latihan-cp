#include <iostream>
using namespace std;
int pow (int x){
    int result = x*x;
    return result;
}

void luaslingkaran(int radius) {

    cout << "LUAS LINGKARAN : " << 3.14*pow(radius) << endl;
}

void kelilinglingkaran(int radius) {

    cout << "KELILING LINGKARAN : " << 3.14*radius*2 << endl;
}
int main(){
   int radius, x;
   cout << "Pilih nomor sesuai kebutuhan penghitungan:\n1. LUAS LINGKARAN\n2. KELILING LINGKARAN\n3.VOLUME BALOK";
   cin >> x;
   if (x == 1){
    cout << "Tentukan Radius Lingkaran: ";
    cin >> radius;
    luaslingkaran(radius);
   } else if ( x == 2){
    //nanti lagi
     cout << "Tentukan Radius Lingkaran: ";
    cin >> radius;
   kelilinglingkaran(radius);
   } else if ( x == 3){

   }
}