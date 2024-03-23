#include <iostream>
using namespace std;

class node
{
private:
    /* data */
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class queue
{
    node *front;
    node *back;

public:
    queue()
    {
        front = NULL;
        back = NULL;
    }
    void enqueue(int x)
    {
        node *newNode = new node(x);
        if (front == NULL)
        {
            back = newNode;
            front = newNode;
            return;
        }
        back->next = newNode;
        back = newNode;
    }
    void pop()
    {
        // pop() method remove the element from the front of queue
        if (front == NULL)
        {
            cout << "Queue underflow" << endl;
            return;
        }
        node *toDelete = front;
        front = front->next;
        delete toDelete;
    }

    void peek()
    {
        if (front == NULL)
        {
            cout << "Queue underflow" << endl;
            return;
        }
        cout << "Peek element of the queue is " << front->data;
    }
    bool empty()
    {
        if (front == NULL)
        {
            return true;
        }
        return false;
    }
    void display()
    {
        node *current = front;

        if (current == NULL)
        {
            cout << "Empty queue" << endl;
        }
        else
        {
            cout << "printing values...." << endl;
            while (current != NULL)
            {
                cout << current->data << endl;
                current = current->next;
                /* code */
            }
        }
    }
};

int main()
{

    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.display();
    // cout << q.peek() << endl;
    q.peek();
    // q.pop();
    // cout << q.peek() << endl;
    // q.pop();
    // cout << q.peek() << endl;

    /* code */
    return 0;
}
