#include <iostream>
using namespace std;

int main()
{
  int x;
  cin >> x;
  if(x>=1 && x<100000) {
  	if( x>=10000){ 
  	cout<<"puluhribuan"<<endl;}
  	 else if ( x>=1000) {
  	cout <<"ribuan"<<endl;
  	} else if (x>=100){
  		cout <<"ratusan"<<endl;
  		} else if (x>=10) {
  			cout << "puluhan"<<endl;
  			} else {
  				cout << "satuan"<<endl;
  				}
  }
}