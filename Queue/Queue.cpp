#include <iostream>
using namespace std;

class Queue
{
private:
    static const int MAX_SIZE = 5;
    int elements[MAX_SIZE];
    int front;
    int rear;

public:
    // Constrictor
    Queue()
    {
        front = -1;
        rear = -1;
    }

    void enqueue(int value)
    {
        if (rear == MAX_SIZE - 1)
        {
            cout << "The queue is overflow" << endl;
            return;
        }
        if (isEmpty())
        {
            front = 0;
        }
        elements[++rear] = value;
    }
    bool isEmpty()
    {
        return front == -1;
    }
    // Dequeue the element front the first side
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty there is not element to remove" << endl;
            return;
        }
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
    }
    // peak function for get the front value of the queue
    int peak()
    {
        if (isEmpty())
        {
            cout << "Queue is empty there is not element in the queue" << endl;
            return -1;
        }
        return elements[front];
    }
    void display()
    {
        for (int i = front; i <= rear; i++)
        {
            cout << elements[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue myQueue;

    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(20);
    myQueue.enqueue(24);
    myQueue.enqueue(50);
    myQueue.enqueue(50);

    myQueue.display();
}