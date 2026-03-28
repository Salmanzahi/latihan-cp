#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{

	cout << "masukkan array secara terbalik ! " << endl;
	int array[3];
	for (int i = 0; i < 3; i++) {
		cin >> array[i];
}

cout << endl;

for(int i= 2; i > -1; i--){
	cout << array[i] << endl;
	}
}