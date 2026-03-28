#include <iostream>

using namespace std;

int main() {
	int n;
	
	
	//Daftar list
	cout << "Masukkan jumlah tampungan : ";
	cin >> n;
	string array[n];
	for(int i = 1; i <= n; i++){
	cout << "Masukkan objek ke- " << i << " ";
	cin >> array[i];
		if ( i == n ) {
		cout << "Array Penuh !\n\n";
		}
}

for (int i = 1; i <= n; i++){
	if (i == 1){
		cout << "List Array: " << endl;
		}
	cout << i << ". " << array[i] << endl;
	
	}

}