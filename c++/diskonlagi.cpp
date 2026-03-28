#include <iostream>
using namespace std;


int listharga(){
    cout << "Mau beli apa ? kakkkk (pembelian diatas 10k diskon 50%)" << endl;
    cout << "1. Kopi : 5k" << endl;
    cout << "2. Air Mineral: 3k" << endl;
    cout << "3. Teh: 6k" << endl;
    cout << "4. Susu: 7k" << endl;
    cout << "5. Es Batu: 500" << endl;

}

int diskon(int a){
double b;
 b = a/100;

 cout << b;
 return 0;
}

/*void totalharga (){
    int price;
    price = 5000;
    cout << "total belanjaan: " << price << endl;
}*/


int  main (){
    int i,price,x;
     listharga();
    cin >> i;

   if ( i = 1){
    cout << " berapa banyak ?" << endl;
    cin >>  x;
    if ( x*5000 >= 25000) {
        cout <<"Total Belanjaanmu (diskon): " <<  endl;
        diskon(25);
    } else {
        cout <<"Total Belanjaanmu (Tanpa Diskon): " << x*5000 << endl;
    }
   }
}