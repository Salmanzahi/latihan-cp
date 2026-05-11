#include <iostream>
using namespace std;


void cetak_menurun(int n){
    if ( n < 1) return;
    cout << n << endl;
    cetak_menurun(n-1);
}

int main (){
    cetak_menurun(10);

}
