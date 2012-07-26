// Drives our lib
#include "bst.h"
#include <iostream>

using namespace std;

int main()
{
    node *root = build123();
    root = insert(root, 4);
    //printInorder(root);

    //cout<<countTrees(3)<<endl;
    //cout<<countTrees(4)<<endl;
    return 0;
}
