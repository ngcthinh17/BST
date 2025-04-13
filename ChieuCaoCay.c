#include <stdlib.h>
#include "BST.h"


int ChieuCaoCay(TREE t)
{
    if (t == NULL)
        return -1;
    int leftHeight = ChieuCaoCay(t->pLeft);
    int rightHeight = ChieuCaoCay(t->pRight);
    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}
