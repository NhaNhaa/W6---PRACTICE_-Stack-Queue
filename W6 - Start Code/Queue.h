#ifndef QUEUE_H
#define QUEUE_H

#include "Node.h"
#include <string>
#include <stdexcept> // For exceptions

class Queue {
private:
    Node* front;     // Pointer to the front of the queue
    Node* rear;      // Pointer to the rear of the queue
    int length;      // Keeps track of the queue size
public:
    Queue() {       // Constructor
        front = NULL;
        rear = NULL;
        length = 0;
    }
    ~Queue() {      // Destructor to free memory
        while (!isEmpty()) {
            dequeue();   // Deallocate all nodes
        }
    }

    // Enqueue an element into the queue
    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (isEmpty()) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        length++;
    }

    // Dequeue the front element from the queue
    void dequeue() {
        if (isEmpty()) {
            throw std::out_of_range("Queue is empty. Cannot dequeue."); // Fixed typo in message
        }
        Node* temp = front;
        front = front->next;
        if (front == NULL) {
            rear = NULL; // Fixed assignment operator
        }
        delete temp;
        length--;
    }

    // Peek the front element without removing it
    int peek() {
        if (isEmpty()) {
            throw std::out_of_range("Queue is empty. Cannot peek.");
        }
        return front->data;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return length == 0;
    }

    // Get the current length of the queue
    int size() {
        return length;
    }

    // Convert the queue to a string representation
    std::string toString() {
        std::string result = "[";
        Node* current = front;
        while (current != NULL) {
            result += std::to_string(current->data);
            if (current->next != NULL) {
                result += ", ";
            }
            current = current->next;
        }
        result += "]";
        return result;
    }
};

#endif // QUEUE_H
