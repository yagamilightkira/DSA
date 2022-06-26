#include <bits/stdc++.h>
using namespace std;

void stackReverse(string &str) {
  stack<char> st;
  for( int i = 0; i < str.length(); i++ ) {
    st.push(str[i]);
  }

  for( int i = 0; i < str.length(); i++ ) {
    str[i] = st.top();
    st.pop();
  }
}

void recursiveReverse( string &str, int i = 0) {
  int n = str.length();

  if( i == n/2 )
    return;
  swap(str[i], str[n - i - 1]);

  return recursiveReverse( str, ++i);
}

void simplyReverse( string& str ) {
  int n = str.length();
  for( int i = 0; i < n/2; i++ ) {
    swap(str[i], str[n-1-i]);
  }
}

int main() {
  int test;
  cin >> test;
  while( test-- ) {
    string str;
    cin >> str;
    // stackReverse( str );
    // recursiveReverse( str);
    simplyReverse( str );
    cout << str << endl;
  }
}
