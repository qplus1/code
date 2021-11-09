#include<iostream>
using namespace std;
class Shape {
protected:
    int width;
    int length;

public:
    Shape(int a=0, int b=0) : width(a), length(b) {}
    virtual int area() {
        cout<<"This is Shape"<<endl;
        return 0;
    }
};

class Triangle : public Shape {
public:
    Triangle(int a, int b) : Shape(a, b) {}
    int area() {
        cout << "This is Triangle: "<<endl;
        return (width*length/2);
    }
};

class Rect : public Shape {
public:
    Rect(int a, int b) : Shape(a, b) {}
    int area() {
        cout << "This is Rect: "<<endl;
        return (width*length);
    }
};

int main() {
    Shape *shape;
    Triangle tri(10, 7);
    Rect rect(2,5);

    shape = &tri;
    shape->area();

    shape = &rect;
    shape->area();

    system("pause");
    return 0;
}