#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

struct Node {
    int value;
    Node* next;

    void print();
};

#endif // NODE_H_INCLUDED
