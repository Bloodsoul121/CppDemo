//
// Created by Administrator on 2020/11/20.
//

#include <iostream>

using namespace std;

class Example {
private:
    int test;
public:
    Example() {
        cout << "Constructing.." << endl;
    } //无参构造函数

    Example(int _test) {
        test = _test;
        cout << "Constructing..." << endl;
    } //有参构造函数

    Example(Example &exa) {
        cout << "Copy constructing..." << endl;
    }

    Example(const Example &exa) {
        cout << "Copy const constructing..." << endl;
    }

    Example Fun(Example ex) { return ex; } //函数的返回值为对象

    Example Fun() {
        Example ex;
        return ex;
    } //函数的返回值为对象

    int getTest() { return test; }
};

int main() {
    Example a(7);
//    Example b;
//    b = a.Fun(a);

    /*
        Constructing...
        Constructing..
        Copy constructing...
        Copy constructing...
     */

//    Example c = a.Fun(a);

    /*
     *  Constructing...
        Copy constructing...
        Copy constructing...
     */

    Example d = a.Fun();

    return 0;
}

