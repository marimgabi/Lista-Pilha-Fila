#include <iostream>
#include "TLista.h"
#include "TPilha.h"
#include "TFila.h"

using namespace std;

int main(){

 TFila<int> *a;

 a=new TFila<int>();

 a->add(20);
 a->add(30);
 a->add(40);
 a->add(50);

 cout << a->peek() << endl;
 a->poll();
 cout << a->peek();


   return 0;
}
