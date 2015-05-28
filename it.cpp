#include "it.h"

It::It():index(0)
{}

It::~It(){}

int * It::next(){
    if(index<_size){
        return (data+(index++));
    }
    else{
        return 0;
    }
}
