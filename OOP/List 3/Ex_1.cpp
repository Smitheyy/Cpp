#include <iostream>

struct B;
struct C;
struct A{
    int a;
    C* klatylda;
};

struct C{
    int a;
    B* wskazniczek;
};

struct B{
    int a;
    A**wsk;
};


int main(){

    A*p;
    p = new A;
    p->a = 1;
    p->klatylda = new C;
    (*((*p).klatylda)).a = 5;
    (*((*p).klatylda)).wskazniczek = new B;
    (*((*((*p).klatylda)).wskazniczek)).a = 7;
    (*((*((*p).klatylda)).wskazniczek)).wsk = &p;

    delete (*((*p).klatylda)).wskazniczek;
    delete p->klatylda;
    delete p;
    p = nullptr;


    return 0;
}
