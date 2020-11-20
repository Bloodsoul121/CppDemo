//
// Created by Administrator on 2020/11/20.
//

/**
1. 任何函数都不能对常数据成员赋值。
2. 构造函数对常数据成员进行初始化时也只能通过初始化列表进行。（只有此一种方法）
3. 常数据成员在初始化时必须赋值或称其必须初始化.
4. 如果类有多个默认构造函数必须都初始化常数据成员。
*/

#include "iostream"

using namespace std;

class C {

public:
    const int tag; // 常数据成员
    int age;

public:

    C(const int a) : tag(a) {

    }

    C(const int a, int b) : tag(a) {

    }

    void createC() {
//        tag = 2; // 异常
    }

    /**
     * 1、常成员函数可以被其他成员函数调用。
        2、但是不能调用其他非常成员函数。
        3、可以调用其他常成员函数。
     */
    void createD() const {    // 只能调用常成员函数和常数据成员。
//        creatC();
//        age = 12; // 异常
        cout << age << endl;
        cout << tag << endl;
    }


    void createF() {
        // 常对象只能调用常成员函数
        const C c(12);
//        c.createC(); // 异常
        c.createD();
    }

};

