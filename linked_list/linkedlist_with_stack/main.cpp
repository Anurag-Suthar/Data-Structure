#include <iostream>
using namespace std;
class Node
{
private:
    /* data*/
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
class Stack
{
    Node *head;

public:
    Stack()
    {
        head = NULL;
    }

    void push(int x)
    {
        // create new node;
        Node *newNode = new Node(x);

        // make the new node points to the head node
        newNode->next = head;

        // make the new node as head node
        //  so that head will always point the last inserted data
        head = newNode;
    }
    void pop()
    {
        Node *temp;
        if (head == NULL)
        {
            cout << "no element into the stack" << endl;
        }
        else
        {
            cout << "Poped element is  =  " << head->data << endl;
            // backup the head node
            temp = head;

            // make the head node points to the next node;
            // logically removing the node
            head = head->next;

            delete temp;
        }
    }
    int peek()
    {
        Node *peek = head;
        return peek->data;
    }
    void display()
    {
        // this method for print all the element which is into the stack container

        Node *temp = head;
        if (temp == NULL)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "print values....." << endl;
            while (temp != NULL)
            {
                cout << temp->data << endl;
                temp = temp->next;
            }
        }
    }
};

int main()
{
    /* code */
    cout << "This is representation of linked list with stack" << endl;
    Stack newStack;
    newStack.push(1);
    newStack.push(2);
    newStack.push(3);
    newStack.push(4);
    newStack.display();
    newStack.pop();
    cout << newStack.peek() << endl;
    newStack.display();

    return 0;
}
