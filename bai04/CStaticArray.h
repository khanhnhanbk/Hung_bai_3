#ifndef CStaticArray_h
#define CStaticArray_h

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional> //std::greater

using namespace std;

class CStaticArray
{
private:
    int size;
    int data[100];
    void sort(bool (*compare)(int, int));

public:
    CStaticArray();
    ~CStaticArray();
    CStaticArray(int n, int value = 0);
    void input(int n);
    void output();
    int getSize();
    // void setSize(int n);
    int getAt(int index);
    void setAt(int index, int value);
    void sortDescending();
    void sortAscending();
    bool find(int value);
    int findIndex(int value);
    int maxValue();
    int minValue();
};

#endif