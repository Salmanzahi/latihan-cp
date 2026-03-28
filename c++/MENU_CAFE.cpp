#include <iostream>
using namespace std;
int main(){
	int i,x,harga,total, diskon;
	cout << "SELAMAT DATANG DI KAFE ARNN\n";
	cout << "1. Kopi Espreso     12k\n";
	cout << "2. Americano        15k\n";
	cout << "3. Cafe Latte       19k\n";
	cout << "4. Vanilla Latte    21k\n";
	cout << "5. Hazelnut Latte   25k\n";
	cout << "6. Cappucino        21k\n";
	cout << endl;
	cout << "Mau Kopi Apa Maszeh? ";
	cin >> i;
	
	if (i == 1){
		cout << "Kopi Espreso Ready Maszeh\n";
		cout << endl;
		cout << " Pesan Berapa Item Maszeh: ";
		cin >> x;
		harga = 12000;
		total = harga * x;
		cout << "Total Harganya " << total <<endl;
	}
	else if (i == 2){
		cout << "Kopi Americano Ready Maszeh\n";
		cout << endl;
		cout << " Pesan Berapa Item Maszeh: ";
		cin >> x;
		harga = 15000;
		total = harga * x;
		cout << "Total Harganya " << total <<endl;
	}
	else if (i == 3){
		cout << "Kopi Caffe Latte Ready Maszeh\n";
		cout << endl;
		cout << " Pesan Berapa Item Maszeh: ";
		cin >> x;
		harga = 19000;
		total = harga * x;
		cout << "Total Harganya " << total <<endl;
	}
	else if (i == 4){
		cout << "Kopi Vanilla Latte Ready Maszeh\n";
		cout << endl;
		cout << " Pesan Berapa Item Maszeh: ";
		cin >> x;
		harga = 21000;
		total = harga * x;
		cout << "Total Harganya " << total <<endl;
	}
	else if (i == 5){
		cout << "Kopi Hazelnut Latte Ready Maszeh\n";
		cout << endl;
		cout << " Pesan Berapa Item Maszeh: ";
		cin >> x;
		harga = 25000;
		total = harga * x;
		cout << "Total Harganya " << total <<endl;
	}
	
	
	
if (total >= 100000){
	cout << "Selamat anda mendapatkan Diskon sebesar 5%\n";
	diskon = total * 0.05;
	cout << "Jadi total harga setelah diskon adalah: " << total - diskon << endl;
}
}