#include <iostream>
using namespace std;
class Singleton
{
public:
    static Singleton *getIntance()
    {
        if (_instance == 0)
        {
            _instance = new Singleton();
        }
        return _instance;
    }

private:
    static Singleton *_instance;
    Singleton()
    {
        cout << "singleton.." << endl;
    }
};

Singleton* Singleton::_instance = 0;

int main()
{
    Singleton *p1 = Singleton::getIntance();
    Singleton *p2 = Singleton::getIntance();
    //delete p1;
    delete p2;

    return 0;
}