#include<iostream>
#include<typeinfo>

using namespace std;

class B {
    virtual void fun() {}
};

class D : public B {};

int main() {
    B* b = new D;
    B& obj = *b;
    D* d = dynamic_cast<D*> (b);
    if (d != nullptr) {
        cout << "work" << endl;
    } else {
        cout << "can not cast B* to D*" << endl;    
    }

    try {
        D& obj = dynamic_cast<D&> (obj);
        cout << "work" << endl;
    } catch (bad_cast bc) {
        cout << bc.what() << endl;
    }

    return 0;
}