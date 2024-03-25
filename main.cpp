#include <iostream>
#include "ArrayStack.h"

using namespace std;

int main(){
    ArrayStack stack;

    stack.randList();

    cout << "******66066780 Nathakith Baosalee******" << endl;

    cout << "--------------------น้อยไปมาก-----------------------" << endl;
    stack.bubbleSort();
    cout << endl;

    cout << "--------------------มากไปน้อย---------------------- " << endl;
    stack.bubbleSort_2();
    cout << endl;

    return 0;
}