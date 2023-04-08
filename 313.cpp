#include <iostream>
using namespace std;
#include "313.h"

void func(MyClass obj) { // разработать функцию, которая в качестве параметра получает объект по значению. Функция вызывается метод 2, далее выводит сумму элементов массива с новой строки.
  obj.method2();
  obj.sum();
}

int main() {
  int size;
  cin >> size; // ввод размерности массива
  
  if ((size % 2 != 0) or (size <= 2)) { // кол-во элементов массива четное и больше двух
    cout << size << "?"; // если размерность массива некорректная, вывод сообщения и завершить работу алгоритма.
    return(0);
  }
  
  cout << size << endl; // вывод значения размерности массива
  MyClass obj(size); // создание объекта с аргументом размерности массива
  obj.input(); // вызов метода для ввода значений элементов массива
  func(obj); // вызов функции передача в качестве аргумента объекта
  cout << endl;
  obj.method1(); // вызов метода 1 от имени объекта
  obj.sum(); // вывод суммы элементов массива объекта с новой строки
  return(0);
}
