#include<iostream>
#include<cstring>

using namespace std;

class Person {
public:
    typedef enum {
        Boy = 0,
        Girl
    }SexType;

    Person(char* n, int a, SexType s) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        age = a;
        sex = s;
    }

    int get_age() const {
        return this->age;
    }

    Person& add_age(int a) {
        this->age += a;
        return *this;
    }
    ~Person() {
        delete [] name;
    }
private:
    char* name;
    int age;
    SexType sex;
};

int main() {
    Person p("qinpu", 25, Person::Boy);
    cout << p.get_age() << endl;
    p.add_age(20);
    cout << p.get_age() << endl;
    system("pause");

    return 0;
}