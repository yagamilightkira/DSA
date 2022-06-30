#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node( int data ) {
    this->data = data;
    next = NULL;
  }
};

struct LinkedList {
  Node* head;
  LinkedList() { head = NULL; }

  void push( int data ) {
    Node* tmp = new Node(data);
    tmp->next = head;
    head = tmp;
  }

  void print() {
    Node* tmp = head;
    while( tmp != NULL ) {
      cout << tmp->data << " ";
      tmp = tmp->next;
    }
  }

  void reverse() {
    Node* current = head;
    Node *prev = NULL, *next = NULL;

    while( current != NULL ) {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
    }
    head = prev;
  }

};

int main() {
  LinkedList ll;
  ll.push(10);
  ll.push(20);
  ll.push(30);
  ll.push(40);

  cout << "Given LL: ";
  ll.print();
  
  ll.reverse();

  cout << "\nReverse LL: ";
  ll.print();
  cout << endl;
}
