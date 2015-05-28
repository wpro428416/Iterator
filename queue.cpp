#include "queue.h"


Queue::Queue():_rear(0),_front(0)
{
    num=new int [20];
}

Queue::~Queue(){
    delete[] num;
}

void Queue::append(int num){
    this->num[_rear++]=num;
}

It * Queue::createIterator(){
    It * it = new It;
    it->data=this->num;
    it->_size=this->_rear;
    return it;
}
