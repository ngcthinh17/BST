
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "BST.h"
int dem = 0;
extern int cnt_node;
extern TREE t;

void storeInorder(int *nodes, TREE node)
    {
        if(node == NULL) return;
        storeInorder(nodes, node -> pLeft);
        nodes[dem] = node->data;
        dem+=1;
        storeInorder(nodes, node -> pRight);
    }
    // xay dung cay nhi phan can bang nodes, int lft, int rgt
NODE* buildBalanceTree(int* nodes, int lft, int rgt)
    {
        if(lft > rgt) return NULL;
        int mid = (lft + rgt) >> 1;
        NODE* node = TaoNode(nodes[mid]);
        node -> pLeft = buildBalanceTree(nodes, lft, mid - 1);
        node -> pRight = buildBalanceTree(nodes, mid + 1, rgt);
        return node;
    }



void balanceBST()
    {
        dem = 0;
        int n = cnt_node;
        int *nodes = (int *) malloc(n * sizeof(int)); 
        storeInorder(nodes, t);
        t = buildBalanceTree(nodes, 0, n - 1);
    }