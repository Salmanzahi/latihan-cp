#include <iostream>
using namespace std;

int main (){
    // int arr[] =  {1,2,4,-3,8,10,-10};
    int n;
    cin >> n;
    int arr[n];
    for (int i =0; i<n;i++){
        cin >> arr[i];
    }
    //  int length = sizeof(arr) / sizeof(arr[0]); 
    //   int max = arr[0];
    //   int min = arr[0];
    int max = 0, min = 0;
     for(int i=0;i<n;i++){
        if (i == 0){
            if( arr[i] < arr[i+1]){
                max = arr[i+1];
            } else {
                max = arr[i];
            }
            if( arr[i] > arr[i+1]){
                min= arr[i+1];
            } else {
                min = arr[i];
            }
          
        }
       
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }

        }
            cout << max << ' ' << min << endl;
     return 0;
   
     }


