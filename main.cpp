#include <iostream>
#include "A.cpp"
#include "A.h"
#include "A.h"
#include "B.h"
#include "B.h"

#include "Person.cpp"
#include "C.cpp"
#include "Friend.cpp"
#include "Parent.cpp"
#include "VisualParent.cpp"
#include "VisualParent2.cpp"

#include "string.h"

using namespace std;

// 内联函数
inline int sum(int a, int b) {
    return a + b;
}

void print(int a) {
    cout << "print : " << a << endl;
}

typedef void (*printFun)(int);

void sendPerson(Person p) {

}

Person createPerson() {
    Person p(123);
    return p;
}

void visit(Friend &f) {
    cout << f.age << endl;
}

void visit2(Friend &f) {
//    cout << f.age << endl; // 非友元函数，不能访问private属性
}

int Parent::tagg = 123; // 好像不能在include文件里，会报错 multiple definition of `Parent::tagg'

typedef struct Clazz {
    int i;
} haha;

int main() {

    Clazz clazz;
    cout << sizeof(clazz) << endl;
    cout << sizeof(haha) << endl;

    haha h;
    cout << sizeof(h) << endl;

    int arr[] = {2, 4, 6, 8};
    cout << arr[2] << endl; // 下标法

    cout << *(arr + 2) << endl; // 地址法

    int *p = arr;
    cout << *(p + 2) << endl; // 指针法


    // 字符串
//    string s;
//    cout << s << endl;
//    cout << sizeof(s) << endl;

    string s1 = "hello";
    cout << s1 << endl;
    cout << sizeof(s1) << endl;
    string s2 = string("hello");
    cout << s2 << endl;
    cout << s2.length() << endl;

    char c[20];
    strcpy(c, s1.c_str());
    cout << c << endl;


    // 虚函数
//    VisualSon22 son;
//    VisualParent2 *parent2 = &son;
//    parent2->say();
//
//    cout << sizeof(son) << endl; // 8
//    cout << sizeof(VisualSon22) << endl; // 8
//    cout << sizeof(VisualParent2) << endl; // 8


    // 虚继承
//    VisualSon son;
//    cout << son.tag << endl;
//    cout << son.VisualChild1::tag << endl;
//    cout << son.VisualChild2::tag << endl;
//
//    cout << &son.tag << endl;
//    cout << &son.VisualChild1::tag << endl;
//    cout << &son.VisualChild2::tag << endl;
//
//    cout << sizeof(son) << endl; // 4 + 8 + 8 -> 24
//
//    VisualSon2 son2;
//    cout << "sizeof(son2) : " << sizeof(son2) << endl;
//
//    VisualChild2 child2;
//    cout << "sizeof(child2) : " << sizeof(child2) << endl;
//
//    VisualParent parent;
//    cout << "sizeof(parent) : " << sizeof(parent) << endl;
//
//    VisualChild3 child3;
//    cout << "sizeof(child3) : " << sizeof(child3) << endl;

//    cout << son.VisualParent.tag << endl;
//    cout << son.VisualChild1.tag << endl;
//    cout << son.VisualChild2.tag << endl;

    // 继承
//    Parent p;
//    p = Son();
//    p.show();

//    EChild s;
//    cout << sizeof(s) << endl;

/*
    Parent : construction
    Parent : construction
    Son : construction
    ~Son
    ~Parent
    Parent show : son , 0
    ~Parent
 */


//    Son s;
//    s.show();

/*
    Parent : construction
    Son : construction
    Son show : son
    ~Son
    ~Parent
*/

//    Son s = Son();
//    Parent *p;
//    p = &s;
//    p->show(); // Parent show : son , 0
//
//    Parent &pp = s;
//    pp.show(); // Parent show : son , 0

//    Son::tagg = 1234;
//    cout << Son::tagg << endl;


//    // 友元函数
//    Friend f;
//    visit(f);
//    visit2(f);


//    // 常函数
//    C c(123);
//    cout << c.tag << endl;


    /* ************************/

//    Person p;
//    p = createPerson();

//    Person p;
//    sendPerson(p);

//    cout << "Hello, World!" << endl;

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


//    // 函数指针
//    void (*pp)(int) = NULL;
//    pp = &print;
//    pp(3);
//
//    void (A::*ppp)(int) = NULL;
//    A a;
//    ppp = &A::print;
//    (a.*ppp)(5);
//
//    // typedef 函数指针
//    printFun fun = &print;
//    fun(123);
//    cout << "printFun size : " << sizeof(fun) << endl;


    // 构造函数、析构函数
//    Person p1;
//    p1.tag = 1;
//
//    Person p2(p1);
//    p2.tag = 2;
//
//    Person p3 = p2;
//    p3.tag = 3;

    /*
     * Person()
     * copy Person
     * ~Person() tag 2 // p2 后入栈，所以销毁时，先出栈
     * ~Person() tag 1
     */

//    Person p = createPerson();
//    cout << p.tag << endl;

//    Person p1(111);
//    Person p2 = p1;

//    Person p;
//    p = createPerson();

//    createPerson();

    return 0;
}
