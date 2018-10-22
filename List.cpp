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
    length++;
}

void List::show() {
    cout<<"List length="<<length<<endl;
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

Node* List::search(int t) {
    for(Node* p = head; p; p = p->next) {
        if(p->value == t) return p;
    }
    return NULL;
}

void List::insert(int t, int n) {
    if(length < n-1 || n < 0) cout << "Can't insert node at this position";
    else {
        length++;
        Node *temp = head;
        Node *k = new Node();
        k->value = t;
        while(--n) {
            temp = temp->next;
        }
        k->next = temp->next;
        temp->next = k;

    }
}

void List::del(int t) {
    if(head->value == t) {
        head = head->next;
        length--;
    }
    else {
        for(Node* p = head; p; p = p->next) {
            if(p->next->value == t) {
                p->next = p->next->next;
                length--;
                return;
            }
        }
    }
}
