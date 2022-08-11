#include <bits/stdc++.h>
using namespace std;

void printTheArr( vector<int> v, int n ) {
  for ( int i = 0; i < n; i++ ) {
    cout << v[i] << " ";
  }
  cout << endl;
}

void sortZeroOneTwos( vector<int> v, int n ) {
  int low = 0, mid = 0, high = n-1;

  while( mid <= high ) {
    switch ( v[mid] ) {
      case 0:
        swap(v[low++], v[mid++]);
        break;
      case 1:
        mid++;
        break;
      case 2:
        swap(v[high--], v[mid]);
      default:
        break;
    }
  }
  printTheArr( v, n );
}

int main() {
  vector<int> v;
  int n, temp;
  cin >> n;
  for ( int i = 0; i < n; i++ ) {
    cin >> temp;
    v.push_back(temp);
  }

  sortZeroOneTwos( v, n );
  
}
