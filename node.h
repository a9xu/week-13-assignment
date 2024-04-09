#ifndef NODE_H
#define NODE_H
// Singly Linked List Node
template <typename T>
class Node
{
protected:
    T data;
    Node<T> *next;

public:
    Node(const T &val)
    {
        data = val;
        next = nullptr;
    }
    Node()
    {
        next = nullptr;
    }
};

#endif