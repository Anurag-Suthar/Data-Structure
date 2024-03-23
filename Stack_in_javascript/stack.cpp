#include <iostream>
using namespace std;
const int MAX_SIZE = 10;
class Stack
{
private:
    int top;
    int elements[MAX_SIZE];

public:
    Stack()
    {
        top = -1;
    }
    void push(int value)
    {
        if (top >= MAX_SIZE - 1)
        {
            cout << "stack is over flow " << endl;
            return;
        }
        elements[++top] = value;
    }
    void pop()
    {
        if (top < 0)
        {
            cout << "Stack is empty " << endl;
            return;
        }
        top--;
    }
    int peek()
    {
        if (top < 0)
        {
            cout << "Stack is empty!" << endl;
            return -1; // Return a default value to indicate an empty stack
        }
        return elements[top]; // Return the top element
    }
};
int main()
{
    Stack myStack;

    // Pushing elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Size of the stack

    // Accessing the top element of the stack (without removing it)
    std::cout << "Top element: " << myStack.peek() << std::endl;

    // Popping elements from the stack
    myStack.pop(); // Removes the top element

    return 0;
}