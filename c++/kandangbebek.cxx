#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int input, input2;
	
	cin >> input;
	int total = 0;
	for(int i=1;i<=input;i++){
		cin >> input2;
			total +=  input2;
		}
	
		cout << total << endl;
}