#include "Node.h"
#include <string>

class Stack {
private:
    Node* top;     // Pointer to the top of the stack
    int length;    // Keeps track of the stack size

public:
    Stack() {       // Constructor
        top = NULL;
        length = 0;
    }

    ~Stack() {      // Destructor to free memory
        while (!isEmpty()) {
            pop();   // Deallocate all nodes
        }
    }

    // Push an element onto the stack
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        length++;
    }

    // Pop the top element from the stack
    void pop() {
        if (isEmpty()) {
            throw std::out_of_range("Stack is empty. Cannot pop.");
        }
        Node* temp = top;
        top = top->next;
        delete temp;
        length--;
    }

    // Peek the top element without removing it
    int peek() {
        if (isEmpty()) {
            throw std::out_of_range("Stack is empty. Cannot peek.");
        }
        return top->data; // Corrected from `value` to `data`
    }

    // Check if the stack is empty
    bool isEmpty() {
        return length == 0;
    }

    // Get the current length of the stack
    int size() {
        return length;
    }

    // Convert the stack to a string representation
    std::string toString() {
        std::string result = "[";
        Node* current = top;
        while (current != NULL) {
            result += std::to_string(current->data); // Corrected from `value` to `data`
            if (current->next != NULL) {
                result += ", ";
            }
            current = current->next;
        }
        result += "]";
        return result;
    }
};
