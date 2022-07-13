#include <bits/stdc++.h>
using namespace std;

typedef struct Pair {
  int min;
  int max;
}Pair;

Pair maxAndMinArr( int arr[], int n ) {
  Pair minmax;
  if ( n == 1 ) {
    minmax.min = arr[0];
    minmax.max = arr[0];
  }

  if ( arr[0] > arr[1] ) {
    minmax.max = arr[0];
    minmax.min = arr[1];
  } else {
    minmax.max = arr[1];
    minmax.min = arr[0];
  }

  for ( int i = 2; i < n; i++ ) {
    if ( arr[i] > minmax.max ) 
      minmax.max = arr[i];
    else if ( arr[i] < minmax.min ) 
      minmax.min = arr[i];
  }

  return minmax;
}

int main() {
 int arr[] = {1, 2, 11, 0, -11 };
 int n = sizeof(arr)/sizeof(arr[0]);

 Pair result = maxAndMinArr( arr, n );
 cout << " min: " << result.min << " max: " << result.max << endl;

 return 0;

}
