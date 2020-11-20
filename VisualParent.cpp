//
// Created by Administrator on 2020/11/20.
//

class VisualParent {
public:
    int tag;
};

class VisualChild1 : virtual public VisualParent {

};

class VisualChild2 : virtual public VisualParent {

};

class VisualSon : public VisualChild1, public VisualChild2 {

};
