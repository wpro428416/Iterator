#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include "it.h"

class Queue
{
private:
    int * num;
    int _rear;
    int _front;
public:
    Queue();
    ~Queue();
    void append(int num);
    It * createIterator();
    friend class It;
};

#endif // QUEUE_H_INCLUDED
