//
// Created by Administrator on 2020/11/23.
//

#include<iostream>

using namespace std;

class CFather {

public:
    virtual void AA() //虚函数标识符
    { cout << "CFather :: AA()" << endl; }

    void BB() { cout << "CFather :: BB()" << endl; }
};


class CSon : public CFather {
public:
    void AA() { cout << "CSon :: AA()" << endl; }

    void BB() { cout << "CSon :: BB()" << endl; }
};

int main() {
    cout << sizeof(CFather) << endl; //测试加了虚函数的类
    system("pause");
    return 0;
}