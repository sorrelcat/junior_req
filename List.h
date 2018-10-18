#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include "Node.h"
#include <stddef.h>

class List{
    Node* head;
    Node* tail;
public:
    List() {
        head = NULL;
        tail = NULL;
    }

    ~List();
    void add(int t);
    void show();
    void sort();
};

#endif // LIST_H_INCLUDED
