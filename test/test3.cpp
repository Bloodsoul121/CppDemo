//
// Created by Administrator on 2020/11/20.
//

# include<iostream>

using namespace std;

/* 父类 */
class MyP {
public:
    static int i;
};

/* 初始化静态成员 */
int MyP::i = 10; /* 子类 */

class MyC : public MyP {
public:
    void test() {
        /* 直接访问 */
        cout << "i = " << i << endl;
        /* 通过父类访问 */
        cout << "Myp::i = " << MyP::i << endl;
        /* 通过子类访问 */ cout << "MyC::i = " << MyC::i << endl;
    }

    void add() { i++; }
};

int main() {
    MyC c;
    c.add();

    c.test();

    MyC c1;
    c1.add();

    c1.test(); /* 通过子类对象访问 */
    c1.i = 100;
    c1.test();

    return 0;
}

