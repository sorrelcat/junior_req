#include "Node.h"
#include <iostream>

using namespace std;

void Node::print() {
    cout << value;
    if(next) cout << " Next: " << next->value << endl;
    else cout << " Next: none" << endl;
}
