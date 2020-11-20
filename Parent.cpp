//
// Created by Administrator on 2020/11/20.
//

#include "iostream"

using namespace std;

class Parent {

public:
    Parent() {
        name = "parent";
        cout << "Parent : construction" << endl;
    }

    Parent(const Parent &p) {
        cout << "Parent : Parent(const Parent &p)" << endl;
    }

    ~Parent() {
        cout << "~Parent" << endl;
    }

public:
    string name;
public:
    static int tagg;
private:
    int age;

public:
    void show() {
        cout << "Parent show : " << name << " , " << age << endl;
    }

};

class Son : public Parent {

public:
    Son(){
        name = "son";
        cout << "Son : construction" << endl;
    }

    ~Son() {
        cout << "~Son" << endl;
    }

    void show() {
        cout << "Son show : " << name << endl;
    }

    void add() {
        tagg++;
    }

};

