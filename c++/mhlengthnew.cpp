#include <iostream>
 
 using namespace std;
 int main(){
 int x1,y1,x2,y2, dx, dy,result;
 cin >> x1>> y1 >> x2 >> y2;
 dx=x1-x2;
 dy=y1-y2;
 result= (dx)+(dy);
 
 if (result < 0) {
 	cout<<result*-1<<endl;
 	} else {
 		cout<<result<<endl; }}
 