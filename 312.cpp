#include <iostream>
#include <set>
using namespace std;
#include "312.h"

int main() {
  int size;
  
  cin >> size;
  if (size <= 4) {
    cout << size << "?";
    return 0;
  }

  MyClass *obj1 = new MyClass(size);
  
  cin >> size;
  if (size <= 4) {
    cout << size << "?";
    return 0;
  }  
  MyClass *obj2 = new MyClass(size);

  (*obj1).print();
  obj1 = obj2;
  cout << endl;
  (*obj1).print(); 
  return(0);
}