#include <bits/stdc++.h>
using namespace std;

void printTheArr( vector<int> v, int n ) {
  for ( int i = 0; i < n; i++ ) {
    cout << v[i] << " ";
  }
  cout << endl;
}

// failing in case of 0s
void moveNegNumtoLeft( vector<int> v, int n ) {
  int left = 0, right = n - 1;
  while ( left <= right ) {
    if ( v[left] < 0 && v[right] < 0 ) {
      left++;
    } else if ( v[left] > 0 && v[right] < 0 ) {
      swap(v[left++], v[right--]);
    } else if ( v[left] < 0 && v[right] > 0 ) {
      left++;
      right--;
    } else {
      right--;
    }
  }
  printTheArr( v, n );
}

void rearrange( vector<int> v, int n ) {
  int l = 0, h = n -1;
  while ( l < h ) {
    if ( v[l] < 0 ) {
      l++;
    } else if ( v[h] > 0 ) {
      h--;
    } else {
      swap( v[l], v[h] );
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
  moveNegNumtoLeft(v, n);
  // rearrange( v, n );
}
