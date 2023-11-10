#include <iostream>

const int MAX_SIZE = 100; // Adjust the maximum size as needed

template <typename T>
class Stack {
private:
    T arr[MAX_SIZE];
    int top;

public:
    Stack() : top(-1) {}

    bool isEmpty() const {
        return top == -1;
    }

    bool isFull() const {
        return top == MAX_SIZE - 1;
    }

    void push(const T& data) {
        if (isFull()) {
            std::cerr << "Stack overflow! Cannot push element.\n";
            return;
        }
        arr[++top] = data;
    }

    void pop() {
        if (isEmpty()) {
            std::cerr << "Stack underflow! Cannot pop element.\n";
            return;
        }
        --top;
    }

    T topElement() const {
        if (isEmpty()) {
            std::cerr << "Stack is empty! No top element.\n";
            // You may want to handle this differently based on your application
            exit(1); // For simplicity, we exit the program here
        }
        return arr[top];
    }
};

int main() {
    // Example usage of the stack
    Stack<int> intStack;

    intStack.push(5);
    intStack.push(10);
    intStack.push(15);

    std::cout << "Top element: " << intStack.topElement() << std::endl;

    intStack.pop();
    std::cout << "Top element after pop: " << intStack.topElement() << std::endl;

    return 0;
}
