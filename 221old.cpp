#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "221old.h"
using namespace std;

int main()
{
  int i_data;
  cin>>i_data;
  Phone fly(i_data);
  fly.print();
  cout<<endl;
  fly.plus2();
  fly.print();
  cout<<endl;
  cin>>i_data;
  fly.otk = fly.otk*i_data;
  fly.print();
  cout<<endl;
  fly.call();
  fly.print();
}


Phone::Phone(int p)
{
  otk = p;
  zak = 2*p;
};

void::Phone::plus()
{
  otk+=5;
  zak+=7;
};
void::Phone::plus2()
{
  otk+=1;
  zak+=4;
};
void::Phone::call()
{
  this->plus();
};
void::Phone:: print()
{
  cout<<"Value of the available property " << otk <<"; Value of a hidden property "<<zak;
};