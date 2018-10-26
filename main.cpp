#include <iostream>
#include "List.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    List l;

    l.add(66);
    l.add(2);
    l.add(7);
    l.add(5);
    l.add(31);

    cout << "Original list" << endl;
    l.show();

    l.sort();
    cout << "Sorted list" << endl;
    l.show();

    l.search(1)->print();
    l.search(2)->print();
    l.search(3)->print();
    l.search(0)->print();

    cout << "Insert 4 in 2 position" << endl;
    l.insert(4, 2);
    l.show();

    cout << "Insert 0 in 0 position" << endl;
    l.insert(0, 0);
    l.show();

    cout << "Insert 42 in 1 position" << endl;
    l.insert(42, 1);
    l.show();

    cout << "Insert 5 in 12 position" << endl;
    l.insert(5, 12);
    l.show();

    cout << "Insert 8 in 8 position" << endl;
    l.insert(8, 8);
    l.show();

    l.del(0);
    cout << "Deletion in 0 position" << endl;
    l.show();
    l.del(1);
    cout << "Deletion in 1 position" << endl;
    l.show();
    l.del(6);
    cout << "Deletion in 6 position" << endl;
    l.show();
    l.del(8);
    cout << "Deletion in 8 position" << endl;
    l.show();


    l.update(0, 0);
    cout << "Updating 0 position to 0" << endl;
    l.show();
    l.update(22, 3);
    cout << "Updating 3 position to 22" << endl;
    l.show();
    l.update(6, 6);
    cout << "Updating 6 position to 6" << endl;
    l.show();

    return 0;
}
