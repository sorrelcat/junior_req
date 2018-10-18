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
    for(Node* t = head; t; t = t->next) {
        for(Node* p = head; p; p = p->next) {
            if(t->value < p->value) {
                int k = t->value;
                t->value = p->value;
                p->value = k;
            }
        }
    }
}

/*
Sort
Search
Insert
Update
Delete
*/
