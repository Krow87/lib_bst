#include "bst.h"
#include <iostream>

using namespace std;

/* Implementation of the Methods */

// newNode()
// Returns a pointer to a new node which contains the specified data values
node *newNode(int data)
{
    node *node = new (struct node);
    node->data = data;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

// insert()
// Return the new root pointer after inserting the node in the
// appropriate place
node *insert(node *node, int data)
{
    if(node == nullptr)
    {
        return newNode(data);
    }
    else
    {
        if(data < node->data)
            node->left = insert(node->left,data);
        else
            node->right = insert(node->right,data);
        // return the unchnged pointer to the root
        return node;
    }
}

// printInorder()
// inorder traversal of the bst
void printInorder(node *node)
{
    if(node == nullptr) return;
    printInorder(node->left);
    cout<<node->data<<" ";
    printInorder(node->right);
}

// build123()
// Returns a bst with the following structure
//      2
//  1       3
node *build123()
{
    node *root = newNode(2);
    insert(root,1);
    insert(root,3);
    return root;
}

// size()
// Count the number of nodes in a given bst
int size(node *node)
{
    if(node == nullptr) return 0;
    else return 1 + size(node->left) + size(node->right);
}


