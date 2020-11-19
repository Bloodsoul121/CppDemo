#include <iostream>
#include "A.cpp"

using namespace std;

// 内联函数
inline int sum(int a, int b) {
    return a + b;
}

void print(int a) {
    cout << "print : " << a << endl;
}

int main() {
    cout << "Hello, World!" << endl;

//    // 内联函数
//    int a = 1, b = 2;
//    int c = 10 + sum(a, b);
//    cout << "c : " << c << endl;


    // 重载函数
//    A a1 = A();
//    A a2 = A(10);
//    A a3 = A(10, 20); // 如果出现了函数重载和函数带有默认参数时，编译是会出错的，指向模糊

//    A a4 = A();
//    int i1 = 5;
//    a4.print(i1); // void print(int a)
//
//    const A a5 = A();
//    int i2 = 5;
//    a5.print(i2); // void print(int a) const
//
//    int *i3 = &i1;
//    a4.print(i3); // void print(int *a)
//
//    const int *i4 = &i1;
//    a4.print(i4); // void print(const int *a)


    // 函数指针
    void (*pp)(int) = NULL;
    pp = &print;
    pp(3);

    void (A::*ppp)(int) = NULL;
    A a;
    ppp = &A::print;
    (a.*ppp)(5);

    return 0;
}
