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
  
  for (int i = 1; i <= a; i++) {
    if (i != a)
      cout << temp[i-1] << " ";
    else
      cout << temp[i-1];
  }
  cout << endl;
  obj1 -> print();
  return(0);
}


MyClass::MyClass(int size) {
  n = size;
  arr = new int[size];
  for (int i = 0; i < size; i++) {
    arr[i] = size;
  }
}

void MyClass::print() {
  for(int i = 1; i <= n; i++) {
    if (i != n)
      cout << arr[i-1] << " ";
    else
      cout << arr[i-1];
  }
}