#ifndef __MYCLASS_H__
#define __MYCLASS_H__
class MyClass {
  public:
    MyClass(int size) {
      n = size;
      arr = new int[size];
      for (int i = 0; i < size; i++) {
        arr[i] = size;
      }
    }
    int *arr;
    int n;
    void print() {
      for(int i = 1; i <= n; i++) {
        if (i != n)
          cout << arr[i-1] << " ";
        else
          cout << arr[i-1];
    }
};
#endif