#ifndef DLIST_H
#define DLIST_H
#include "dnode.h"
// Doubly Linked List
template <typename T>
class Dlist
{
private:
    Dnode<T> *head;
    Dnode<T> *tail;

public:
    Dlist() : head(nullptr), tail(nullptr) {}

    // Add a node to the end of the list
    void append(const T &val)
    {
        Dnode<T> *newNode = new Dnode<T>(val);
        if (!head)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Print the list front-to-back
    void printForward() const
    {
        Dnode<T> *current = head;
        while (current)
        {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    // Print the list back-to-front
    void printBackward() const
    {
        Dnode<T> *current = tail;
        while (current)
        {
            std::cout << current->data << " ";
            current = current->prev;
        }
        std::cout << std::endl;
    }

    // Destructor to free memory
    ~Dlist()
    {
        Dnode<T> *current = head;
        while (current)
        {
            Dnode<T> *next = current->next;
            delete current;
            current = next;
        }
    }
};

#endif