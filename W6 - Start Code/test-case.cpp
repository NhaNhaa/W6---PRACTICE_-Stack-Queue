#include "Stack.h"
#include "Queue.h"

using namespace std;

int main() {
// Test cases for the Stack class
    Stack myStack;
    // Test Case 1: Push elements 11, 22, and 33 onto the stack and print the stack.
    
    myStack.push(11);
    myStack.push(22);
    myStack.push(33);
    // Expected Output: 33, 22, 11.
    cout<< myStack.toString() << endl;
    // Test Case 2: Pop the top element from the stack and print the stack.
    myStack.pop();
    // Expected Output: 22, 11
    cout<< myStack.toString() << endl;

    // Test Case 3: Peek the top element from the stack and print the stack.
    int result = myStack.peek();
    cout<< "Top of the stack is: "<<result << endl; // Expected Output: 22
    
    // Test Case 4: Check if the stack is empty and print the stack size.
    cout<< "Stack is empty: "<< boolalpha << myStack.isEmpty() << endl; // Expected Output: false
    //check the size of the stack
    cout<< "Stack size is: "<<myStack.size() << endl; // Expected Output: 2

// Test cases for Qeueu class
    Queue myQueue;
    // Test Case 1: Enqueue elements 11, 22, and 33 into the queue and print the queue.
    myQueue.enqueue(11);
    myQueue.enqueue(22);
    myQueue.enqueue(33);
    // Expected Output: 11, 22, 33.
    cout<< myQueue.toString() << endl;
    // Test Case 2: Dequeue the front element from the queue and print the queue.
    myQueue.dequeue();
    // Expected Output: 22, 33
    cout<< myQueue.toString() << endl;
    // Test Case 3: Peek the front element from the queue and print the queue.
    result = myQueue.peek();
    cout<< "Front of the queue is: "<<result << endl; // Expected Output: 22
    // Test Case 4: Check if the queue is empty and print the queue size.
    cout<< "Queue is empty: "<< boolalpha << myQueue.isEmpty() << endl; // Expected Output: false
    //check the size of the queue
    cout<< "Queue size is: "<<myQueue.size() << endl; // Expected Output: 2
    return 0;
}
