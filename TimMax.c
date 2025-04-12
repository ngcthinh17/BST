#include <stdlib.h>
#include "BST.h"


int TimMax(TREE t)
{
    if (t == NULL) return -1;
    while (t->pRight != NULL)
    {
        t = t->pRight;
    }
    return t->data;
}
