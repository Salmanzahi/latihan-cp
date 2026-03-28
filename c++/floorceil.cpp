#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x;
	cin >> x;
	
	if(x < 0) {
	cout<<trunc(x) - 1<<" "<<trunc(x)<<endl; } else {
		cout<<trunc(x)<< " "<<trunc(x) + 1 << endl;
		}
	
}