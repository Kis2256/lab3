#include "cmake-build-debug/array.h"
#include <iostream>
#include <array>

Array::Array(int size, int k) {
    m_index = 0;
    this-> m_k = k;
    if (size <= 0) {
        std::cout << "size is wrong" << std::endl;
        m_capacity = 0;
        m_arr = nullptr;
    } else {
        m_capacity = size;
        m_arr = new int[m_capacity];
    }
}
Array::~Array() {
    delete[] m_arr;
}

void Array::setValue(int val) {
    if (m_arr == 0) {
        std::cout << "array not initialized" << std::endl;
        return;
    }

    if (m_index >= m_capacity) {
        expandArray(m_capacity);
    }
    m_arr[m_index++] = val;
}
void Array::showElements() {
    if (m_arr == nullptr) {
        return;
    }
    for (int i = 0; i < m_index; i++) {
        std::cout << m_arr[i] << " ";
    }
    std::cout << std::endl;
}

int Array::getSize() {
    return m_capacity;
}
int Array::expandArray(int size) {
    if (size <= 0) {
        return 0;
    }
    int* newArr = new int[m_capacity+size];
    for (int i = 0; i < m_capacity; i++) {
        newArr[i] = m_arr[i];
    }
    delete[] m_arr;
    m_arr = newArr;
    m_capacity += size;
}

int Array::getElemSize() {
    return m_index;
}

void Array::setArray(int* pArr ,  int size) {
      for (int i = 0; i < size; i++) {
           m_arr[m_index++] = pArr[i];
      }
  }




