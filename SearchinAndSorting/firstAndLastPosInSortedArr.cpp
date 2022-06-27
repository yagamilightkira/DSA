#include <bits/stdc++.h>
using namespace std;

void findFirstAndLast( int arr[], int n, int k ) {
  int first = -1, last = -1;
  for( int i = 0; i < n; i++ ) {
    if ( arr[i] != k )
      continue;
    if ( first == -1 )
      first = i;
    last = i;
  }
  cout << first << " " << last << endl;
}

int main() {
  int test;
  cin >> test;
  while( test-- ) {
    int n, k;
    cin >> n;
    int arr[n];
    for( int i = 0; i < n; i++ )
      cin >> arr[i];
    cin >> k;   
    findFirstAndLast( arr, n, k);
  }
  return 0;
}
