#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include "Node.h"
#include <stddef.h>

class List{
    Node* head;
    Node* tail;
    int length;
public:
    List() {
        head = NULL;
        tail = NULL;
        length = 0;
    }

    ~List();
    void add(int t); //adding to tail
    void show(); //print numbers in list
    void sort(); //ascending sort by values
    Node* search(int t); //returns first node with value=t
    void insert(int t, int n); //inserts number t in n position (from 0 to length-1)
    void del(int t); //deletes first node with value=t
};

#endif // LIST_H_INCLUDED
