# include <iostream>
using namespace std;

// int main(){
//  int n, start = 1, counter =1, sum = 0;
//  cin >> n;

//  while (  counter <= n) {
//     if ( start %  2 != 0){
//         sum+= start;
//         counter++;
//     } 
//   start++;
  
//  }
//  cout << sum;
// }

// more efficient

int main(){
    int n, counter, sum = 0, start=1;
    cin >> n;
    for ( int counter=1; counter<=n; counter++){
        sum+= start;
        start+=2;
    }
    cout << sum;
}

