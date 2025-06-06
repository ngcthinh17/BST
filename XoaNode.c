#include <stdlib.h>
#include "BST.h"
extern int cnt_node;

void XoaNode(TREE* t, int data)
{
    if (*t == NULL)
        return;

    if (data < (*t)->data)
    {
        XoaNode(&(*t)->pLeft, data);
    }
    else if (data > (*t)->data)
    {
        XoaNode(&(*t)->pRight, data);
    }
    else
    {
        NODE* X = *t;
        if ((*t)->pLeft == NULL)
        {
            *t = (*t)->pRight;
        }
        else if ((*t)->pRight == NULL)
        {
            *t = (*t)->pLeft;
        }
        else
        {
            NODE* Y = (*t)->pRight;
            DiTimNodeTheMang(&X, &Y);
            cnt_node-=1;
        }
        if (X != *t)
            free(X);
    }
}
