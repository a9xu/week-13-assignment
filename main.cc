#include <iostream>
#include "dlist.h"

int main()
{
    Dlist<int> list;

    // Add nodes to the doubly linked list
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(5);

    // Print the list front-to-back
    std::cout << "List front-to-back: ";
    list.printForward();

    // Print the list back-to-front
    std::cout << "List back-to-front: ";
    list.printBackward();

    return 0;
}
