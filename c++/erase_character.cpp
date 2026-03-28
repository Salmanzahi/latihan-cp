#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Masukkan Jumlah katamus: ";
	cin >> n;
	char str[n];
	
	for (int i = 0; i < n; i++){
		cin >> str[i];
		}
	for (int i = 0 ;i < n; i++){
		for(int j = 0; j < n-i; j++){
			cout << str[j];
			if (j == n-i-1){
				cout << endl;
				}
			}
		}
}