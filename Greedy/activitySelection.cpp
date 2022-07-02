#include <bits/stdc++.h>
using namespace std;

void printActivities( int s[], int f[], int n ) {
  int i = 0, j = 0;
  // First activity will always be done
  cout << i << " ";
  for( int j = 1; j < n; j++ ) {
    if ( s[j] >= f[i] ) {
      cout << j << " ";
      i = j;
    }
  }
  cout << endl;
} 

struct Activities{
  int start, finish;
};

bool activityCompare( Activities s1, Activities s2) {
  return s1.finish < s2.finish;
}

void printActivitiesDone( Activities arr[], int n ) {
  sort( arr, arr+n, activityCompare );

  int i = 0;
  cout << arr[i].start << " " << arr[i].finish << endl;

  for( int j = 1; j < n; j++ ) {
    if ( arr[j].start >= arr[i].finish ) {
      cout << arr[j].start << " " << arr[j].finish << endl;
      i = j;
    }
  }

}

int main() {
  // int s[] = {1, 3, 0, 5, 8, 5};
  // int f[] = {2, 4, 6, 7, 9, 9};
  // int n = sizeof(s)/sizeof(s[0]);
  // printActivities( s, f, n );

  Activities arr[] = {{5, 9}, {1, 2}, {3, 4}, {0, 6}, {5, 7}, {8, 9}};
  int n = sizeof(arr)/sizeof(arr[0]);
  printActivitiesDone(arr, n);
  return 0;
}
