#ifndef MYCLASS_H
#define MYCLASS_H
using namespace std;

class MyClass {
  public:
    MyClass(int i_data) {
      publicProp = i_data;
      privatProp = i_data * 3;
    }
    int publicProp; // доступное свойство
    void print() { // метод вывода состояния
      cout << "Value of the available property " << publicProp << "; " << "Value of a hidden property " << privatProp;
    }
    void change1() { // метод изменения значения доступного и скрытого свойства
      publicProp += 4; // доступное свойство
      privatProp += 1; // скрытое свойство
    }
    void call() { // метод вызова скрытого метода;
      this -> change2();
    }
  private:
    int privatProp; // скрытое свойство
    void change2() { // метод доступному свойству добавляет 5, скрытому свойству добавляет 7
      publicProp += 7; // доступное свойство
      privatProp += 5; // скрытое свойство
    }
};

#endif