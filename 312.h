#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass {
  public:
    int sizePrint;
    MyClass(int size) {
      sizePrint = size;
      for (int i = 0; i < size; i++) {
        S.insert(size);
      }
    }
    void print() {
      for(int i = 0; i < sizePrint; i++) {
        if (i != sizePrint - 1)
          cout << *(S.begin()) << "  ";
        else
          cout << *(S.begin());
      }
   }
  private:
    set<int> S;
};
#endif