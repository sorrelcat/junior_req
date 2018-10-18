#include "List.h"
#include <iostream>

using namespace std;

List::~List() {
    while(head != NULL) {
        Node* temp = head->next;
        delete head;
        head = temp;
    }
}

void List::add(int t) {
    Node* temp = new Node();
    temp->value = t;
    temp->next = head;
    head = temp;
}

void List::show() {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->value << endl;
        temp = temp->next;
    }
}

void List::sort(){
}

/*
Sort
Search
Insert
Update
Delete
*/
