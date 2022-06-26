#include <bits/stdc++.h>
using namespace std;
#define R 4
#define C 4

void spiralPrint( int matrix[R][C] ) {
  int row = 0, col = 0, m = R, n = C, i;
  while( row < R && col < C ) {
    for( i = col; i < n; i++ ) {
      cout << matrix[row][i] << " ";
    }
    row++;

    for( i = row; i < m; i++ ) {
      cout << matrix[i][n-1] << " ";
    }
    n--;

    if( row < m ) {
      for( i = n - 1; i >= col; i-- ){
        cout << matrix[m-1][i] << " ";
      }
      m--;
    }

    if( col < n ) {
      for( i = m - 1; i >= row; i-- ) {
        cout << matrix[i][col] << " ";
      }
      col++;
    }
  }
  cout << endl;
}

int main() {
  int matrix[R][C] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12},
                   {13, 14, 15, 16}};
  
  spiralPrint( matrix);

  return 0; 
}
