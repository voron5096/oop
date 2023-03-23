#include "311old.h"
#include <iostream>
using namespace std;
int main() {
  int size;
  
  cin >> size;
  MyClass *obj1 = new MyClass(size);
  if (size <= 4) {
    cout << size << "?";
    return 0;
  }
  
  cin >> size;
  MyClass *obj2 = new MyClass(size);
  if (size <= 4) {
    cout << size << "?";
    return 0;
  }
  
  int *temp = obj1 -> arr;
  int a = obj1 -> n;
  obj1 = obj2;
  
  for (int i = 1; i <= a; i++) { // засунуть внутрь принта? 
    if (i != a)
      cout << temp[i-1] << " ";
    else
      cout << temp[i-1];
  }
  cout << endl;
  obj1 -> print(); // вызов первого объекта 
  return(0);
}