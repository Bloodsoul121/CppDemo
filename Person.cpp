//
// Created by Administrator on 2020/11/20.
//

#include "iostream"

using namespace std;

class Person {

public:
    int tag = 0;

public:
    Person() {
        cout << "Person()" << endl;
    }

    Person(int tag) {
        this->tag = tag;
        cout << "Person() tag " << this->tag << endl;
    }

    ~Person() {
        cout << "~Person() tag " << tag << endl;
    }

    Person(const Person &person) {
        this->tag = person.tag;
        cout << "copy : const Person" << tag << endl;
    }

    Person(Person &person) {
        this->tag = person.tag;
        cout << "copy : Person" << tag << endl;
    }

};


class EChild : public Person {

};
