#include <iostream>
#include "ArrayList.h"

using namespace std;

ArrayList::ArrayList(int maxSize)
{
    this->maxSize = maxSize;
    curSize = 0;
    L = new int[this->maxSize];
}

ArrayList::~ArrayList()
{
    delete [ ]L;
}

int ArrayList::size()
{
    return curSize;
}

int ArrayList::indexOf(int e)
{
    if(curSize == 0)
    {
        cout << "Error Empty list" << endl;
        return -1;
    }

    for (int i = 0; i < curSize; ++i) {
        if (L[i] == e) {
            return i; 
        }
    }
    return -1;
}

int ArrayList::get(int i)
{
    if(curSize == 0)
    {
        return 0;
    }

    if(i<0)
    {
        i = 0;
    }

    else if (i > curSize-1)
    {
        i = curSize-1;
    }

    return L[i];
}

void ArrayList::set(int i, int e)
{
    
    if (i < 0)
    {
        cout << "Error :  i is under lower bound."<< endl;
        return;
    }

    else if ( i > curSize)
    {
        cout << "Error :  i is over upper bound. "<< endl;
        return;
    }

    L[i] = e;
}

int ArrayList::remove(int i)
{
    for (int j = i; j < curSize - 1; j++)
    {
        L[j] = L[j + 1];
    }
    --curSize;

    return L[i];
}

void ArrayList::add(int i, int e)
{
if(curSize == maxSize)
    {
        cout << "Error list is full" << endl;
        return;
    }

    if (i < 0)
    {
        cout << "Warning :  i is under lower bound, i change to 0 " << endl;
        i = 0;
    }

    else if ( i > curSize)
    {
        cout << "Warning :  i is over upper bound, i change to " << curSize << endl;
        i = curSize;
    }

    for (int j = curSize - 1; j >= i; j -- )
        L[j +1 ] = L[j];

    L[i] = e;

    curSize ++;


}

void ArrayList::display()
{
    cout << "L: {";
    if (curSize == 0 )
        cout << "}, ";
    else
        for (int i = 0; i < curSize; i++)
        {
            cout << L[i];
            if (i < curSize - 1)
                cout << ",";
            else
                cout << "}, ";
        }
    cout << "size:" << curSize << "/" << maxSize << endl; 
}

void ArrayList::clear()
{
    curSize = 0;
}

int ArrayList::min()
{
    {
        if(curSize == 0)
    {
        cout << "Error Empty list" << endl;
        return 0;
    }

        int minValue = L[0];
        for (int i = 1; i < curSize; ++i) {
            if (L[i] < minValue) {
                minValue = L[i];
            }
        }
        return minValue;
    }
}

int ArrayList::max()
{
        if(curSize == 0)
    {
        cout << "Error Empty list" << endl;
        return 0;
    }

        int maxValue = L[0];
        int i = 1;
        while (i < curSize) {
            if (L[i] > maxValue) {
                maxValue = L[i];
            }
            i++;
        }
        return maxValue;
    }

    bool ArrayList::isempty()
    {
        if(curSize <= 0)
    {
        return true;
    }
        else
        return false; 
    }

void ArrayList::bubbleSort() {
    cout << "Sort : ";
    for (int i = 0; i < maxSize-1; i++) {
        for (int j = 0; j < maxSize-i-1; j++) {
            if (L[j] > L[j+1]) {
                int temp = L[j];
                L[j] = L[j+1];
                L[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < maxSize; i++) {
        cout << L[i] << ", ";
    }
}

void ArrayList::bubbleSort_2() {
    cout << "Sort : ";
    for (int i = 0; i < maxSize-1; i++) {
        for (int j = 0; j < maxSize-i-1; j++) {
            if (L[j] < L[j+1]) {
                int temp = L[j];
                L[j] = L[j+1];
                L[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < maxSize; i++) {
        cout << L[i] << ", ";
    }
}