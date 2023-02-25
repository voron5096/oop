#include <stdlib.h>
#include <stdio.h>
#include "object.h";
using namespace std;

int main() {
  Object Myobject;
  return(0);
}

Object::Object() {
  cout << "Constructor \n";
}
Object::~Object() {
  cout << "Destructor";
}