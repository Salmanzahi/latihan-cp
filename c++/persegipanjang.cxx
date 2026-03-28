#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	// Persegi panjang
	int tinggi, lebar;
	cout << "Massukkan tinggi dan Lebar !  ";
	cin >> tinggi >>  lebar;
	
	for(int i = 1;i<=tinggi;i++) {
		for(int j = 1; j<=lebar;j++){
			cout << "*";		
				}
				cout << endl;
		}
	}

