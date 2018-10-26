#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
#include <stddef.h>

struct Node {
    int value;
    Node* next;

    void print();

    Node() {next = NULL; value = NULL;}
};

#endif // NODE_H_INCLUDED
