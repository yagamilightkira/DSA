#include<bits/stdc++.h>
using namespace std;

void unionArr( int arr1[], int arr2[], int m, int n ) {
  int i = 0, j = 0;
  while( i < m && j < n ) {
    if ( arr1[i] < arr2[j] ) {
      cout << arr1[i++] << " ";
    } else if ( arr2[i] < arr1[j] ) {
      cout << arr2[j++] << " ";
    } else {
      cout << arr1[i++] << " ";
      j++;
    }
  }

  while ( i < m )
    cout << arr1[i++] << " ";
  
  while ( j < n )
    cout << arr2[j++] << " ";
}

void intersectionArr( int arr1[], int arr2[], int m, int n ) {
  int i = 0, j = 0;
  while ( i < m && j < n ) {
    if ( arr1[i] == arr2[j] ) {
      cout << arr2[j++] << " ";
      i++;
    } else if ( arr1[i] < arr2[j] ) {
      i++;
    } else {
      j++;
    }
  }
}

int main() {
  int test;
  cin >> test;
  while( test-- ) {
    int m, n;
    cin >> m;
    int arr1[m];
    for( int i = 0; i < m; i++ )
      cin >> arr1[i];
    
    cin >> n;
    int arr2[n];
    for( int i = 0; i < n; i++ )
      cin >> arr2[i];
    
    unionArr( arr1, arr2, m, n);
    intersectionArr( arr1, arr2, m, n);

  }
}