#ifndef PRIORITYQUEUEG_H_
#define PRIORITYQUEUEG_H_

template <typename T,typename C,typename E>
class PriorityQueueG{
    public:
    virtual ~ PriorityQueueG()= default;
    virtual int size() const= 0;
    virtual bool isEmpty() const= 0;
    virtual void insert(const T& e)= 0;
    virtual const T& min() const = 0;
    virtual void removeMin() = 0;
};

#endif