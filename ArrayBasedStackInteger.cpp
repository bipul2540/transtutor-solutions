#include <iostream>

const int MAX_SIZE = 100; // Maximum size of the stack

class IntStack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    IntStack() : top(-1) {}

    bool isEmpty() const {
        return top == -1;
    }

    bool isFull() const {
        return top == MAX_SIZE - 1;
    }

    void push(int value) {
        if (isFull()) {
            std::cerr << "Stack overflow! Cannot push element.\n";
            return;
        }
        arr[++top] = value;
    }

    void pop() {
        if (isEmpty()) {
            std::cerr << "Stack underflow! Cannot pop element.\n";
            return;
        }
        --top;
    }

    int topElement() const {
        if (isEmpty()) {
            std::cerr << "Stack is empty! No top element.\n";
            // Handle differently based on your application
            exit(1); // For simplicity, we exit the program here
        }
        return arr[top];
    }
};

int main() {
    // Example usage of the stack
    IntStack myStack;

    myStack.push(5);
    myStack.push(10);
    myStack.push(15);

    std::cout << "Top element: " << myStack.topElement() << std::endl;

    myStack.pop();
    std::cout << "Top element after pop: " << myStack.topElement() << std::endl;

    return 0;
}
