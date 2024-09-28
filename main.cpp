#include <iostream>
using namespace std;

class A {
public:
    virtual void show() {
        cout << "Class A" << endl;
    }
    int i;
};

class B : public A {
public:
    void show() override {
        cout << "Class B" << endl;
    }
    int j;
};

class C : public A {
public:
    void show() override {
        cout << "Class C" << endl;
    }
    int m;
};

class D : public B, public C {
public:
    int k;
};

int main() {
    D obj;
    obj.C::show();
    obj.B::show();
    obj.A::show();
    /* obj.A::i = 11;*/
    /*obj.m = 20;
    obj.i = 22;
    cout << obj.m << "||" << obj.i << endl;*/
    return 0;
}