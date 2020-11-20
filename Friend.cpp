//
// Created by Administrator on 2020/11/20.
//

#include <iostream>
#include "string"

using namespace std;

class Friend {

    friend class D;

public:
    string name;

private:
    int age = 88;

public:
    friend void visit(Friend &f);
//    friend void visit2(Friend &f);

};
