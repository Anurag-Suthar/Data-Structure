#include <iostream>
using namespace std;

struct TreeNode
{
    int data;
    struct TreeNode *left, *right;

    TreeNode(int val)
    {
        this->data = val;
        left = right = NULL;
    }
};

// inOrder traversal
void inOrder(struct TreeNode *node)
{
    /* data */
    if (node == NULL)
        return;

    inOrder(node->left);
    cout << node->data << "-> ";
    inOrder(node->right);
};
// preOrder to traversal the node
void preOrder(struct TreeNode *node)
{
    /* data */
    if (node == NULL)
        return;
    // data , left , right
    cout << node->data << "-> ";
    preOrder(node->left);
    preOrder(node->right);
};

// post traversal node
void postOrder(struct TreeNode *node)
{
    /* data */
    if (node == NULL)
        return;
    postOrder(node->left);
    postOrder(node->right);
    cout << node->data << "-> ";
};

int main()
{
    struct TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(12);
    root->right = new TreeNode(9);
    root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(6);

    cout << "inOrder traversal: ";
    inOrder(root);

    cout << "\nPreOrder traversal: ";
    preOrder(root);

    cout << "\npost Order Traversal: ";
    postOrder(root);
}