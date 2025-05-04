#ifndef ARRAY_H
#define ARRAY_H


class Array {
 //Специфікатори доступу
 private: //доступ мають лише інші члени цього ж класу
 int m_capacity; //розмір масиву
 int* m_arr; //вказівник на масив
 int m_k; //крок
 int m_index; //індекс поточного елементу масиву
 public:   //main може в икористовувати дані
 Array(int size, int k);
 ~Array();
 //Методи класу
 void showElements();
 int expandArray(int size);
 int getSize(); //повертає максимальний розмір масиву.
 int getElemSize(); //повертає кількість доданих елементів
 void setValue(int val); // додає значення в масив.
 void setArray(int* pArr ,  int size); //копіює масив у внутрішній масив.
};
#endif
