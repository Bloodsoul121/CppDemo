//
// Created by Administrator on 2020/11/19.
//

#include "iostream"
#include "A.h"

using namespace std;

class A {

private:
    int a;
    int b;

public:

    // 默认构造函数
    A() {

    }

    A(int a) {
        this->a = a;
    }

    A(int a, int b) {
        this->a = a;
        this->b = b;
    }

    // 占位参数
    A(int a, int b, int = 0) {
        this->a = a;
        this->b = b;
    }

    void print(int a) {
        cout << "void print(int a)" << endl;
    }

    void print(int a) const {
        cout << "void print(int a) const" << endl;
    }

    void print(int *a) {
        cout << "void print(int *a)" << endl;
    }

    void print(const int *a) {
        cout << "void print(const int *a)" << endl;
    }

//    // 与 void print(int a) 冲突
//    void print(int &a) {
//        cout << "void print(int &a)" << endl;
//    }
//
//    // 与 void print(int a) 冲突
//    void print(const int &a) {
//        cout << "void print(const int &a)" << endl;
//    }

};

