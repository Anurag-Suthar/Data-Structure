#include <iostream>
#include <vector>
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
class ArrayBinaryTree
{

private:
    // int size = 15;
    // int arr[15];
    vector<int> arr;

public:
    ArrayBinaryTree(){};
    void insert(int val)
    {
        arr.push_back(val);
    }

    void display()
    {
        cout << "Binary Tree Arrays...." << endl;
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    TreeNode *arrayToTree()
    {
        return arrayToTreeRecursive(0);
    }

private:
    // helper method to convert the array representation to a binary tree recursively;
    TreeNode *arrayToTreeRecursive(int index)
    {
        if (index >= arr.size())
        {
            return nullptr;
        }
        TreeNode *newNode = new TreeNode(arr[index]);
        cout << newNode->data << endl;
        newNode->left = arrayToTreeRecursive(2 * index + 1);
        newNode->right = arrayToTreeRecursive(2 * index + 2);
        return newNode;
    }
};

int main()
{
    ArrayBinaryTree newBinaryTree;
    newBinaryTree.insert(5);
    newBinaryTree.insert(3);
    newBinaryTree.insert(2);
    newBinaryTree.insert(4);
    newBinaryTree.insert(4);
    newBinaryTree.insert(4);
    newBinaryTree.insert(4);

    newBinaryTree.display();

    // convert the array representation to a binary tree;
    TreeNode *root = newBinaryTree.arrayToTree();

    return 0;
};