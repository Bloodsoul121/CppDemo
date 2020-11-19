//
// Created by Administrator on 2020/11/19.
//

#include <iostream>
#include "Super.cpp"

using namespace std;

//void swap(int &x, int &y) {
//    int temp = x;
//    x = y;
//    y = temp;
//}

template<typename T>
void swap1(T &t1, T &t2) {
    T temp = t1;
    t1 = t2;
    t2 = temp;
}

template<class T>
T getTType(int type) {
    return type + 1;
}

int main() {

    int a = 10;
    int b = 20;
    swap1(a, b);
    cout << "a = " << a << ", b = " << b << endl;

    double c = 10;
    double d = 20;
    swap1(c, d);
    cout << "c = " << c << ", d = " << d << endl;

    int type1 = getTType<int>(0);
    auto type2 = getTType<double>(0);
    cout << type1 / 2 << endl;
    cout << type2 / 2 << endl;

    Super<int> super = Child();
    super.setT(12);
    super.print();

    Child child = Child(10, 20);
//    Child child;
//    Child child = 10;
    child.print();
    Super<int> *super2 = &child;
    super2->setT(12);
    super2->print();

    return 0;
}