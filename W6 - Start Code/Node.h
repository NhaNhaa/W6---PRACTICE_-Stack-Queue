#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <cstddef>

class Node {
public:
    int data;     // Data to be stored
    Node* next;   // Pointer to the next node

    Node(int value) {  // Constructor
        data = value;
        next = NULL;
    }
    
};

#endif // NODE_H