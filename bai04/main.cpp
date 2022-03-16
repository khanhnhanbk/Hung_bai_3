#include "CStaticArray.h"

int main(){
    CStaticArray a;
    a.input(5);
    a.output();
    cout << a.getAt(2) << endl;
    a.setAt(2, 10);
    a.output();
    cout << a.maxValue() << endl;
    cout << a.minValue() << endl;
    a.sortDescending();
    a.output();
    cout << a.find(10) << endl;
    cout << a.findIndex(10) << endl;
    return 0;
}