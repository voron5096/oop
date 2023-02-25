#include <stdlib.h>
#include <stdio.h>
#include "object.h";

using namespace std;
int main() {
  Object object;
  return(0);
}

Object::Object() {
  cout << "Constructor" << endl;
}

Object::~Object() {
  cout << "Destructor";
}