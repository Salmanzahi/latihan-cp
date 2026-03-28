#include <iostream>

using namespace std;

int main() {
   int a,b,n, count = 0;
   
   
   
   cout << "masukan awalan:";
   cin >> a;
   
   cout << "masukan beda:";
   cin >> b;
   
   cout << "masukan suku ke-n:";
   cin >> n;
   cout << "Barisan Aritmatika" << endl;
   for(int i = 0; i < n; i++){
    cout << a + i*b << " ";
    count += a+i*b;
   }
     cout << "\nDeret Artimatika" << endl;
    for(int i = 0; i < n; i++){
      if (i > 0){
         cout << " + ";
      }
    cout << a + i*b;
   }
   cout << " = " << count;
   return 0;
}