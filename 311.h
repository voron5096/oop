#ifndef MYCLASS_H
#define MYCLASS_H


class MyClass {
  public:
    int sizePrint;
    int *arr;
    MyClass(int size) {
      sizePrint = size;
      arr = new int[size];
      for (int i = 0; i < size; i++) {
        arr[i] = size;
      }
    }
    void print() {
      for(int i = 0; i < sizePrint; i++) {
        if (i != sizePrint - 1)
          cout << arr[i] << "  ";
        else
          cout << arr[i];
      }
   }
};
#endif