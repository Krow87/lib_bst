#ifndef BST_H
#define BST_H

struct node
{
    int data;
    node *left, *right;
};

/* Method Headers */

// newNode()
// Returns a pointer to a new node which contains the specified data values
node *newNode(int data);

// insert()
// Return the new root pointer after inserting the node in the
// appropriate place
node *insert(node *node, int data);

// build123()
// Returns a bst with the following structure
//      2
//  1       3
node *build123();

// size()
// Count the number of nodes in a given bst
int size(node *node);

// height()
// Find the height of a given bst
int height(node *node);

// printInorder()
// inorder traversal of the bst
void printInorder(node *node);

// printPostorder()
// postorder traversal of the bst
void printPostorder(node *node);

// mirror()
// Exchange the left and right children for each of the nodes in the tree
void mirror(node *node);

// sameTree()
// Compare two given trees to see if they are identical
bool sameTree(node *a, node *b);

// isBST()
// Check if the given tree is a valid bst or not
bool isBST(node *node);

// countTrees()
// Given and integer N, count how many distinct bst's can be formed with 1..N
// countTrees(1) = 1
// countTrees(2) = 2
// countTrees(3) = 5
// countTrees(4) = 14
int countTrees(int N);
#endif
