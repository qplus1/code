/**
 * @file vptr1.cpp
 * @brief C++�麯��vptr��vtable
 * ���룺g++ -g -o vptr vptr1.cpp -std=c++11
 * @author ���
 * @version v1
 * @date 2019-07-20
 */

#include <iostream>
#include <stdio.h>
using namespace std;

/**
 * @brief ����ָ��
 */
typedef void (*Fun)();

/**
 * @brief ����
 */
class Base
{
    public:
        Base(){};
        virtual void fun1()
        {
            cout << "Base::fun1()" << endl;
        }
        virtual void fun2()
        {
            cout << "Base::fun2()" << endl;
        }
        virtual void fun3(){}
        ~Base(){};
};

/**
 * @brief ������
 */
class Derived: public Base
{
    public:
        Derived(){};
        void fun1()
        {
            cout << "Derived::fun1()" << endl;
        }
        void fun2()
        {
            cout << "DerivedClass::fun2()" << endl;
        }
        ~Derived(){};
};
/**
 * @brief ��ȡvptr��ַ��func��ַ,vptrָ�����һ���ڴ棬����ڴ��ŵ����麯����ַ������ڴ����������˵�����
 *
 * @param obj
 * @param offset
 *
 * @return 
 */
Fun getAddr(void* obj,unsigned int offset)
{
    cout<<"======================="<<endl;
    void* vptr_addr = (void *)*(unsigned long *)obj;  //64λ����ϵͳ��ռ8�ֽڣ�ͨ��*(unsigned long *)objȡ��ǰ8�ֽڣ���vptrָ��
    printf("vptr_addr:%p\n",vptr_addr);

    /**
     * @brief ͨ��vptrָ�����virtual table����Ϊ�����ÿ��Ԫ��(�麯��ָ��)��64λ����������8���ֽڣ����ͨ��*(unsigned long *)vptr_addrȡ��ǰ8�ֽڣ�
     * �������ƫ��������ÿ�������ĵ�ַ��
     */
    void* func_addr = (void *)*((unsigned long *)vptr_addr+offset);
    printf("func_addr:%p\n",func_addr);
    return (Fun)func_addr;
}
int main(void)
{
    Base ptr;
    Derived d;
    Base *pt = new Derived(); // ����ָ��ָ��������ʵ��
    Base &pp = ptr; // ��������ָ�����ʵ��
    Base &p = d; // ��������ָ��������ʵ��
    cout<<"�������ֱ�ӵ���"<<endl;
    ptr.fun1();
    cout<<"���������û���ʵ��"<<endl;
    pp.fun1(); 
    cout<<"����ָ��ָ��������ʵ���������麯��"<<endl;
    pt->fun1();
    cout<<"��������ָ��������ʵ���������麯��"<<endl;
    p.fun1();

    // �ֶ�����vptr �� vtable
    Fun f1 = getAddr(pt, 0);
    (*f1)();
    Fun f2 = getAddr(pt, 1);
    (*f2)();
    delete pt;
    return 0;
}