#include <bits/stdc++.h>
using namespace std;


int main(){
    // size of matrix (represent of x*y size)
    int x, y;
    cin >> x >> y;
    vector<vector<int>> matrix(x, vector<int>(y));
    for (int i =  0; i < x; i++){
        for(int j = 0; j < y; j++){
            cin >> matrix[i][j];
        }
    }
    // matrix output from inputted matrix
    for (int i =  0; i < x; i++){
        for(int j = 0; j < y; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}



// matrix determinant

int matrixDeteriminant(vector<vector<int>>&matrix){
    for ( int j )
}

