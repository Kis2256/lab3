#include <iostream>
#include "cmake-build-debug/array.h"
#include <array>

int main()
{
    Array array(10, 5);
    array.setValue(6);
    array.setValue(60);
    array.setValue(40);
    array.showElements();   // оператор вибору членів (.)
}
