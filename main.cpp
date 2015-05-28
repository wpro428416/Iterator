#include <iostream>
#include <assert.h>
#include "queue.h"
#include "it.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Queue q;
    q.append(100);
    q.append(200);

    It* it1 = q.createIterator();
    cout << *(it1 -> next()) << *(it1 -> next()) << endl;
    assert(!it1 -> next());

    It* it2 = q.createIterator();
    cout << *(it2 -> next()) << endl;
    assert(*(it2 -> next()) == 200);

}
