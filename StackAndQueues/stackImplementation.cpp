#include <bits/stdc++.h>
using namespace std;

#define MAX 1000

class Stack {
  int top;

  public:
    int a[MAX];
    Stack() { top = -1; }
    bool push( int x );
    int pop();
    int peek();
    bool isEmpty();
};

bool Stack::push( int x ) {
  if ( top > MAX - 1 ) {
    cout << "Stack Overflow \n";
    return false;
  } else {
    a[++top] = x;
    return true;
  }
}

int Stack::pop() {
  if ( top < 0 ) {
    cout << " Stack Underflow \n";
    return 0;
  } else {
    return a[top--];
  }
}

int Stack::peek() {
  if ( top < 0 ) {
    cout << " Stack Underflow \n";
    return 0;
  } else {
    return a[top];
  }
}

bool Stack::isEmpty() {
  return ( top < 0 );
}

int main() {
  class Stack s;
  s.push(10);
  s.push(20);
  s.push(30);

  cout << "Top:: " << s.pop() << endl;
  cout << "Pop:: " << s.peek() << endl;
  cout << " isEmpty::\n";
  while ( !s.isEmpty() ) {
    cout << s.peek() << endl;
    s.pop();
  }
  return 0;
}
