#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "221.h"
using namespace std;

int main() {
  int i_data;
  cin >> i_data; // 1 ввод целочисленного значения переменной i_data
  MyClass test = MyClass(i_data); // 2 создание объекта, параметризированному конструктору в качестве аргумента передается переменная i_data
  test.print(); // 3 вывод исходного состояния объекта.
  cout << endl;
  test.change1(); // 4 вызов метода изменения значений свойств объекта.
  test.print(); // 5 вывод текущего состояния объекта.
  cout << endl;
  cin >> i_data; // 6 ввод целочисленного значения переменной i_data.
  test.publicProp = test.publicProp * i_data; // 7 непосредственное изменение доступного свойства объекта посредством умножения его значения на i_data.
  test.print(); // 8 вывод текущего состояния объекта.
  cout << endl;
  test.call(); // 9 вызов метода объекта, который вызывает скрытый метод объекта.
  test.print(); // 10 вывод текущего состояния объекта.
  return(0);
}