#include <iostream>
#include "List.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    List l;

    l.add(1);
    l.add(2);
    l.add(3);
    l.show();

    l.sort();
    l.show();

    return 0;
}
