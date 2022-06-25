#include <bits/stdc++.h>
using namespace std;

void printTheArray( int arr[], int n ) {
  for( int i = 0; i < n; i++ ) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void reverseTheArray( int arr[], int n ) {
  int left = 0, right = n - 1;
  for( int i = 0; i < n/2; i++ ) {
    swap(arr[left++], arr[right--]);
  }
  printTheArray(arr, n);
}

int main() { 
  int test;
  cin >> test;
  while( test-- ) {
    int n;
    cin >> n;
    int arr[n];
    for( int i = 0; i < n; i++ ) {
      cin >> arr[i];
    }
    reverseTheArray(arr, n);
  }
  return 0;
}
