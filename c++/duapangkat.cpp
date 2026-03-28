#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int n;
	cin >> n;
	
	while(n%2 == 0) {
	n = n/2;
}

if (n == 1) {
	cout << "iya" << endl;
	} else { cout << "bukan" << endl; } }
/*	int input, i;
	bool found = false;
	cin >> input;
	int x = 65536;
	for (int i =1;i<=x;i*=2) {
		if ( i == input && i != 1) {
			cout << "iya" << endl;
			found = true;
			break;
			} 
		}
		
	if (!found && input <=x) {
		cout << "bukan" << endl;
		}
} */



