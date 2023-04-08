#include <iostream>
using namespace std;
#include "314.h"

void func(MyClass obj) {
  obj.method1();
  obj.vivod();
  obj.sum();
  obj.method2();
  obj.vivod(); // вывод содержимого массива второго объекта
  obj.sum(); // вывод суммы элементов массива второго объекта
}

int main() {
  int size;
  cin >> size; // ввод размерности массива
  
  if ((size % 2 != 0) or (size <= 2)) { // если размерность массива некорректная, вывод сообщения и завершить работу алгоритма
    cout << size << "?";
    return (0);
  }
  
  cout << size << endl; // вывод значения размерности массива
  MyClass *obj2 = new MyClass; // создание первого объекта
  MyClass obj(size); // присвоение первому объекту результата работы функции func с аргументом, содержащим значение размерности массива
  obj.input(); // для первого объекта вызов метода создания массива.

  cout << endl;
  func(obj);
  cout << endl;
  return(0);
}