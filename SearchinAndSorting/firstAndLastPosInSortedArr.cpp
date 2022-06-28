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

int recursiveFirstFind( int arr[], int low, int high, int x, int n ) {
  if ( high >= low ) {
    int mid = (low + high)/2;
    if ( ( mid == 0 || x > arr[mid -1] ) && x == arr[mid] )
      return mid;
    else if ( x > arr[mid] ) 
      return recursiveFirstFind( arr, (mid + 1), high, x, n );
    else
      return recursiveFirstFind( arr, low, (mid - 1), x, n );
  }
  return -1;
}

int recursiveSecondFind( int arr[], int low, int high, int x, int n ) {
  if ( high >= low ) {
    int mid = (low+high)/2;
    if ( ( mid == n - 1 || x < arr[mid + 1]) && arr[mid] == x ) 
      return mid;
    else if ( x < arr[mid] )
      return recursiveSecondFind( arr, low, mid -1, x, n);
    else 
      return recursiveSecondFind( arr, mid + 1, high, x, n);
  }
  return -1;
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
    // findFirstAndLast( arr, n, k);
    // int left = recursiveFirstFind( arr, 0, n-1, k, n);
    // int right = recursiveSecondFind( arr, 0, n-1, k, n );
    // cout << left << " " << right << endl;
  }
  return 0;
}
