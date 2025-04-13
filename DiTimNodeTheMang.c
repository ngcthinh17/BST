#include <stdlib.h>
#include "BST.h"


void DiTimNodeTheMang(NODE** x, NODE** y) 
{
    if ((*y)->pLeft != NULL) 
    {
        DiTimNodeTheMang(x, &(*y)->pLeft);
    } 
    else 
    {
        (*x)->data = (*y)->data;
        NODE* temp = *y;
        *y = (*y)->pRight;
        free(temp);
    }
}
