#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_

#include <iostream>
#include "ArrayList.h"

using namespace std;

//#define  DEFAULT_STACK_SIZE 5
#define  DEFAULT_STACK_SIZE 1000

class ArrayStack : public ArrayList
{
private:
    int maxSize;
public:
    ArrayStack(int maxSize = DEFAULT_STACK_SIZE);
    //~ArrayStack();
    void randList();
    void push(int e);
    int pop();
    int top();

    void SwapTwoTop();
};

#endif