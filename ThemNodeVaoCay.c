#include <stdlib.h>
#include "BST.h"

extern int cnt_node;

void ThemNodeVaoCay(TREE* t, int x)
{
    if (*t == NULL)
    {
        *t = TaoNode(x);
        cnt_node+=1;
    }
    else
    {
        if (x < (*t)->data)
        {
            ThemNodeVaoCay(&(*t)->pLeft, x);
        }
        else if (x > (*t)->data)
        {
            ThemNodeVaoCay(&(*t)->pRight, x);
        }
    }
}
