#include <iostream>
#include "List.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    List l;

    l.add(1);
    l.add(2);
    l.add(7);
    l.add(5);
    l.add(3);
    l.show();

    l.sort();
    l.show();

    l.search(1)->print();
    l.search(2)->print();
    l.search(3)->print();

    l.insert(4, 2);
    l.show();
    l.sort();
    l.show();

    l.del(2);
    l.show();
    l.del(1);
    l.show();

    return 0;
}
