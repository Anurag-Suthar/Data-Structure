#include <iostream>
using namespace std;

#define n 20

class Queue
{
    int *arr;
    int front;
    int back;

public:
    Queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int x)
    {
        if (back == n - 1)
        {
            cout << "Queue overflow" << endl;
            return;
        }
        back++;
        arr[back] = x;

        if (front == -1)
        {
            front++;
        }
        // return arr[front];
    }
    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << "no element in to the queue" << endl;
            return;
        }
        front++;
    }
    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "no element in queue" << endl;
            return -1;
        }
        return arr[front];
    }
    int *display()
    {
        // if (front == -1 || front > back)
        // {
        //     cout << "no Element in queue" << endl;
        //     return;
        // };

        return arr;
    }
};

int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout << q.display() << endl;

    cout << "hello world";

    return 0;
};