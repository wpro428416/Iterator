#ifndef IT_H_INCLUDED
#define IT_H_INCLUDED

class It
{
private:
    int * data;
    int index;
    int _size;
public:
    It();
    ~It();
    int * next();
    friend class Queue;
};

#endif // IT_H_INCLUDED
