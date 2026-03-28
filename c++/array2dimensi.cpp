#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n,m, x;
	cin >> n >> m;
	
	int a[n][m];
	
	for(int i = 0; i < n; i++){
		for(int j = 0;j<m; j++){
			cin >> a[i][j];
			}
		}
		cout << endl;
		for(int i = 0; i < n; i++){
		for(int j = 0;j<m; j++){
			x = a[i][j];
			if ( j == 0){
				cout << x + 5 << " ";
			} else if ( j % 2 != 0 && j != 0){
				cout << x + 5 << endl;
				} else if (j % 2 == 0) {
					cout << x + 5 << " ";
					}
		}

}
}


