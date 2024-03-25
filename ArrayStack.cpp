#include "ArrayStack.h"

using namespace std;

ArrayStack::ArrayStack(int maxSize) : ArrayList(maxSize)
{
    this->maxSize = maxSize;
}

void ArrayStack::randList()
{
    for (int i = 0; i < maxSize; i++) add(i, rand() % 1000);
}

void ArrayStack::push(int e)
{
    add(size(), e);
}

int ArrayStack::pop()
{
    return remove(size() - 1);
}

int ArrayStack::top()
{
    return get(maxSize);
}

void ArrayStack::SwapTwoTop()
{
    if (size() >= 2) {
        int top1 = get(size() - 1);
        int top2 = get(size() - 2);

        set(size() - 1, top2);
        set(size() - 2, top1);
    } else {
        cout << "Error: Not enough elements in the stack to perform the swap." << endl;
    }
}

