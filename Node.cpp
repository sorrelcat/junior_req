#include "Node.h"
#include <iostream>

using namespace std;

void Node::print() {
    cout << value;
    if(next) cout << " Next: " << next->value;
    else cout << " Next: none";
    cout << endl;
}
