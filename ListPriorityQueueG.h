
#include "NodeListG.h"
#include "PriorityQueueG.h"



template <typename T, typename C, typename E>
class ListPriorityQueueG: public PriorityQueueG<T,C,E> {

private:
    NodeListG<T> list;
    C isLess;
  

public:
    ListPriorityQueueG();
    ~ListPriorityQueueG();
    int size() const;
    const T& min() const;
    void insert(const T& element);
    void removeMin();
    bool isEmpty() const;
    void print();

};