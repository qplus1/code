#include<iostream>
using namespace std;

class Base {
public:
    inline virtual void who() {
        cout << "I am base!\n";
    }
    virtual ~Base() {}
};

class Derived : public Base {
public:
    // inline void who() {
    void who() {

        cout << "I am derived\n";
    }
};

int main() {
    Base b;
    b.who();

    Base* ptr = new Derived();
    ptr->who();

    delete ptr;
    ptr = nullptr;

    system("pause");
    return 0;
}

/**
 * 编译器对 inline 函数的处理步骤
 * 将 inline 函数体复制到 inline 函数调用点处；
 * 为所用 inline 函数中的局部变量分配内存空间；
 * 将 inline 函数的的输入参数和返回值映射到调用方法的局部变量空间中；
 * 如果 inline 函数有多个返回点，将其转变为 inline 函数代码块末尾的分支（使用 GOTO）。
 */