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

class BinaryTree
{
private:
    TreeNode *root;

    TreeNode *insertRecursive(TreeNode *node, int data)
    {
        if (node == nullptr)
        {
            node = new TreeNode(data);
        }
        else
        {
            if (data <= node->data)
            {
                node->left = insertRecursive(node->left, data);
            }
            else
            {
                node->right = insertRecursive(node->right, data);
            }
        }
        return node;
    }

    void inOrderRecursive(TreeNode *node)
    {
        if (node != nullptr)
        {
            inOrderRecursive(node->left);
            cout << node->data << " ";
            inOrderRecursive(node->right);
        }
    }

public:
    BinaryTree() : root(nullptr){};

    void insert(int val)
    {
        root = insertRecursive(root, val);
    }
    // Method to perform in-order traversal
    void inOrderTraversal()
    {
        cout << "In-order traversal: ";
        inOrderRecursive(root);
        cout << endl;
    }
};

int main()
{

    BinaryTree newTree;
    newTree.insert(5);
    newTree.insert(6);
    newTree.insert(4);
    newTree.insert(4);
    newTree.insert(4);

    newTree.inOrderTraversal();
};