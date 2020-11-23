//
// Created by Administrator on 2020/11/20.
//

#include "iostream"

using namespace std;

class VisualParent2 {
public:
    virtual void say() {
        cout << "VisualParent say" << endl;
    }
};

class VisualSon22 : public VisualParent2 {
    void say() {
        cout << "VisualSon say" << endl;
    }
};

