#ifndef MYCLASS_H
#define MYCLASS_H
#include <iostream>
using namespace std;

class MyClass {
  public:
    MyClass() {
      cout << "Constructor" << endl;
    }
    ~MyClass() {
      cout << "Destructor" << endl;
    }
};

#endif