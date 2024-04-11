#include "ListPriorityQueueG.h"
#include "Point2D.h"
#include "ListPriorityQueueException.h"
#include "IteratorG.h"

template<typename T, typename C, typename E>
ListPriorityQueueG<T, C, E>::ListPriorityQueueG() {

}


template<typename T, typename C, typename E>
ListPriorityQueueG<T, C, E>::~ListPriorityQueueG() {

}

template<typename T, typename C, typename E>
int ListPriorityQueueG<T, C, E>::size() const {
    return list.size();
}

template<typename T, typename C, typename E>
bool ListPriorityQueueG<T, C, E>::isEmpty() const {
    return list.empty();
}

template<typename T, typename C, typename E>
void ListPriorityQueueG<T, C, E>::insert(const T& element) {
    IteratorG<T> p;
    p  = list.begin();
    while (p != list.end() && !isLess(element, *p)) ++p;
    list.insert(p, element);
}

template<typename T, typename C, typename E>
const T& ListPriorityQueueG<T, C, E>::min() const {
    if (isEmpty()) {
        throw E("Empty");
    }
    return *list.begin();
}

template<typename T, typename C, typename E>
void ListPriorityQueueG<T, C, E>::removeMin() {
    if (isEmpty()) {
        throw E("Empty");
    }
    list.eraseFront();
}

template<typename T, typename C, typename E>
void ListPriorityQueueG<T, C, E>::print(){
    list.print();
}

template class ListPriorityQueueG <Point2D, LeftRight, PriorityQueueException>;
template class ListPriorityQueueG <Point2D, BottomUp, PriorityQueueException>;