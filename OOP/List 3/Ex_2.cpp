#include <string>

class B;
class C;

class A {
public:
    C *ptrC;
    int val;
    B *ptrB;
};

class B {
public:
    A *ptrA;
    int val;
    B *ptrB;
};

class C {
public:
    A **ptrA;
    int val;
    void *ptrIDK;
};

class E;
class D {
public:
    std::string *ptrStr;
    int val;
    E *ptrE;
};

class E {
public:
    E *ptrE;
    int val;
    std::string *ptrStr;
};


int main() {
    /* * * * * * * * * *
     *       (a)       *
     * * * * * * * * * */
    A *ptr = new A;
    ptr->val = 1;
    ptr->ptrB = new B;
    ptr->ptrC = new C;

    ptr->ptrB->val = 5;
    ptr->ptrB->ptrA = ptr;
    ptr->ptrB->ptrB = ptr->ptrB;

    ptr->ptrC->val = 7;
    ptr->ptrC->ptrA = &ptr;
    ptr->ptrC->ptrIDK = nullptr;

    delete ptr->ptrB;
    delete ptr->ptrC;
    delete ptr;
    ptr = nullptr;


    /* * * * * * * * * *
     *       (b)       *
     * * * * * * * * * */
    std::string message = "a";
    D *ptr2 = new D;
    ptr2->ptrStr = &message;
    ptr2->val = 0;
    ptr2->ptrE = new E;

    ptr2->ptrE->ptrE = ptr2->ptrE;
    ptr2->ptrE->val = 2;
    ptr2->ptrE->ptrStr = &message;

    delete ptr2->ptrE;
    delete ptr2;
    ptr2 = nullptr;

    return 0;
}

