#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int x, y;
	cin >> x >> y;4
	for (int i = 1; i <= x; i++){
		if ( i % y == 0) {
			cout << "*" << " ";
			} else {
				cout << i << " ";
				}
}
}