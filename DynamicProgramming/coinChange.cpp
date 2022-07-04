#include<bits/stdc++.h>
using namespace std;

// Dynamic programming approach
int countChangeCoin( int arr[], int n, int k ) {
  int i, j, x, y;

  int table[k+1][n];

  for( i = 0; i < n; i++)
    table[0][i] = 1;
  
  for( i = 1; i < k + 1; i++ ) {
    for( j = 0; j < n; j++ ) {
      x = ( i - arr[j] >= 0 ) ? table[i - arr[j]][j] : 0;
      y = ( j >= 1 ) ? table[i][j - 1] : 0;
      table[i][j] = x + y;
    }
  }
  return table[k][n - 1];
}

int main() {
  int arr[] = {1, 2, 3};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = 4;
  cout << countChangeCoin( arr, n, k) << endl ;
  return 0;
}
