#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "BST.h"

bool find_val(TREE t, int x)
{
    if(t == NULL) return false;
    if(t->data < x) return find_val(t->pRight, x);
    else if(t->data > x) return find_val(t->pLeft, x);
    else return true;
}