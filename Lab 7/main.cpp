#include <iostream>
using namespace std;

struct Node {    
    int data;    
    Node* next;
 };

void insertAtBeginning(Node*& head, int val){
  Node* newNode = new Node();
  newNode->data = val;
  newNode->next = head;
  head = newNode;
}

void deleteFromBeginning(Node*& head){
  if(head == NULL){
    cout << "List is empty." << endl;
    return;
  }
  Node* temp = head;
  head = head->next;
  delete temp;
}


int main() { 
  Node* start = NULL;
  insertAtBeginning(start, 4);
  insertAtBeginning(start, 3);
  insertAtBeginning(start, 2);
  insertAtBeginning(start, 1);

  Node* current = start;
  while(current != NULL){
    cout << current->data << endl;
    current = current->next;
  }

  cout << "Linked List after deletion: " << endl;
  
  deleteFromBeginning(start);
  
  current = start;
  while(current != NULL){
    cout << current->data << endl;
    current = current->next;
  }
  
}