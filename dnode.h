#ifndef DNODE_H
#define DNODE_H
#include "node.h"

template <typename T>
class Dlist;

// Doubly Linked List Node, child of Singly Linked List Node
template <typename T>
class Dnode : public Node<T>
{
private:
    T data;
    Dnode<T> *prev;
    Dnode<T> *next;

public:
    Dnode(const T &val) : data(val), prev(nullptr), next(nullptr) {}
    friend class Dlist<T>;
};

#endif