//
// Created by Administrator on 2020/11/19.
//

#include <iostream>

template<class T>
class Super {
public:
    T t;

    void setT(T tt) {
        t = tt;
    }

    virtual void print() {
        std::cout << "Super " << t << std::endl;
    }
};

class Child : public Super<int> {

public:
    Child() : Super<int>() {

    }

    /*explicit*/ Child(int c) : Super<int>() {
        t = c;
    }

    Child(int c, int d = 100) : Super<int>() {
        t = c;
    }

    void print() {
        std::cout << "child " << t << std::endl;
    }

private:
    int c;
    int d;
};
