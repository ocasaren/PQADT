#include "NodeListG.h"
#include "IteratorG.h"
#include "Point2D.h"

template<typename T>
NodeListG<T>::NodeListG() {
  n = 0; // initialize empty
  header = new DNodeG<T>; //head dummy node 
  trailer = new DNodeG<T>; //tail
  header->next = trailer; //pointing >-<
  trailer->prev = header;

}

template<typename T>
NodeListG<T>::~NodeListG() {
}

template<typename T>
int NodeListG<T>::size() const {
  return n;
}

template<typename T>
bool NodeListG<T>::empty() const {
  return n==0;
}

template<typename T>
IteratorG<T> NodeListG<T>::begin() const {
  return IteratorG<T>(header->next);
}

template<typename T>
IteratorG<T> NodeListG<T>::end() const {
  return IteratorG<T>(trailer);
}

template<typename T>
void NodeListG<T>::insertFront(const T &e)  {
  insert(begin(), e);
}

template<typename T>
void NodeListG<T>::insertBack(const T &e) {
  insert(end(), e);
}

template<typename T>
void NodeListG<T>::insert(const IteratorG<T> &p, const T &e) {

  DNodeG<T>* w = p.v; // p’s node
  DNodeG<T>* u = w->prev; // p’s predecessor
  DNodeG<T>* v = new DNodeG<T>; // new node to insert
  v->elem = e;
  v->next = w; w->prev = v; // link in v before w
  v->prev = u; u->next = v; // link in v after u
  n++;

}



template<typename T>
void NodeListG<T>::eraseFront() {
  erase(begin());
}

template<typename T>
void NodeListG<T>::eraseBack() {
   erase(--end());
}

template<typename T>
void NodeListG<T>::erase(const IteratorG<T> &p) {// remove p
  DNodeG<T>* v = p.v; //remove node v
  DNodeG<T>* w = v->next; //after
  DNodeG<T>* u = v->prev; //before
  u->next = w; w->prev = u; // ulink u , w
  delete v; // delete node
  n--; 
}

template<typename T>
void NodeListG<T>::print(){
  IteratorG<T> p(begin());
  for (; p != end(); ++p)
    cout<< p.v->elem<< " <=> ";
  cout<<"NULL"<<endl;
}

template class NodeListG<int>;
template class NodeListG<string>;
template class NodeListG<Point2D>;