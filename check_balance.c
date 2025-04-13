#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "BST.h"


bool check_balance(TREE node)
    {
        if(node == NULL) return true;
        int dif = abs(ChieuCaoCay(node -> pLeft) - ChieuCaoCay(node -> pRight));
        return (dif <= 1 && check_balance(node -> pLeft) && check_balance(node -> pRight));
    }