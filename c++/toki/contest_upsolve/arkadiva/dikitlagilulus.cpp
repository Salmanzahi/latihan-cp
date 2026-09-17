#include <iostream>

using namespace std;


bool isSorted(int arr[], int N){
    for (int i=1;i<N;i++){
        if ( arr[i] > arr[i+1]) return false;

    }
    return true;
    
}


int main (){
  int n, X;
  cin >> n >> X;
  int arr[n];
  for (int i=1;i<=n;i++){
    cin >> arr[n];
  }
}


