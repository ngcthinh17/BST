#include <stdlib.h>
#include <stdio.h>
#include "BST.h"

void Traversal(TREE node)
{
    if(node == NULL) {
        return;
    }
    Traversal(node->pLeft);
    printf("%d ", node->data);
    Traversal(node->pRight);
}