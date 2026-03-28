#include <iostream>
using namespace std;

int main() {
  //Membuat Persegi
int panjang;
  cout << "Berapa panjangnya ? ";
  cin >> panjang;
  
  for(int i = 1;i<=panjang;i++){
  	for(int j = 1;j<=panjang;j++){
  		cout << "*" << " ";
  		}
  		cout<<endl;
  		}
}
