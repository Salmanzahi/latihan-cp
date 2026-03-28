#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int input;
	cin >> input;
	
	for(int i = 1; i<=input; i++){
		if(i%10==0){
			continue; } 
		 if ( i == 42) {
				cout << "ERROR" << endl;
				break;
				}
				cout << i << endl;
	}
}