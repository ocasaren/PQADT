#ifndef NODELISTG_H_
#define NODELISTG_H_

#include "ListG.h"
#include "DNodeG.h"


template<typename T>
class IteratorG; 

template <typename T>
class NodeListG: public ListG<T, IteratorG<T>> {
//class NodeListG is parameterized by type T(placeholder that is later specified by user), and is is a template class that inherits from  ListG


private:
    int n; //stores number of elements in the list
    DNodeG<T>* header; //head dummy node
    DNodeG <T>* trailer; //tail dummy node

public:
    NodeListG();
    virtual ~NodeListG();
    int size() const;
    bool empty() const; //is list empty
    IteratorG<T> begin() const; //beginning pos
    IteratorG<T>end() const; //after last pos
    void insertFront(const T &e);
    void insertBack(const T &e);
    void insert(const IteratorG<T>& p, const T& e); //inserts e before p
    void eraseFront(); //removes first element
    void eraseBack(); //removes last element
    void erase(const IteratorG<T>& p); //removes p
    void print(); //print function
};


#endif