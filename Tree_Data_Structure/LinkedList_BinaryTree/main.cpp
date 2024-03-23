#include <iostream>
using namespace std;

struct TreeNode
{
    int data;
    struct TreeNode *left;
    struct TreeNode *right;

    TreeNode(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

class BinaryTreeLinkedList
{
private:
    TreeNode *root;

    // helper method to insert a node recursively
    void insertHelper(TreeNode *currentNode, TreeNode *newNode)
    {
        if (newNode->data <= currentNode->data)
        {
            if (currentNode->left == nullptr)
            {
                currentNode->left = newNode;
            }
            else
            {
                insertHelper(currentNode->left, newNode);
            }
        }
        else
        {
            if (currentNode->right == nullptr)
            {
                currentNode->right = newNode;
            }
            else
            {
                insertHelper(currentNode->right, newNode);
            }
        }
    }
    // Method to display the elements of the binary tree (in-order traversal)
    void displayInOrder(TreeNode *node)
    {
        if (node != nullptr)
        {
            displayInOrder(node->left);
            cout << node->data << " ";
            displayInOrder(node->right);
        }
    }

public:
    // constructor function
    BinaryTreeLinkedList() : root(nullptr) {}

    // method to insert the node into the Binary Tree
    void insert(int data)
    {
        TreeNode *newNode = new TreeNode(data);
        if (root == nullptr)
        {
            root = newNode;
        }
        else
        {
            insertHelper(root, newNode);
        }
    }

    void display()
    {
        cout << "Binary Tree as Linked List (in order traversal)" << endl;
        displayInOrder(root);
        cout << endl;
    }
};

int main()
{
    BinaryTreeLinkedList NewTree;
    NewTree.insert(5);
    NewTree.insert(12);
    NewTree.insert(45);
    NewTree.insert(6);

    NewTree.display();
}