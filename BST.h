#ifndef BST_H
#define BST_H

#include "DinhNghiaNode.h"
#include <stdbool.h>

NODE* TaoNode(int x);
void KhoiTaoCay(TREE* t);
void ThemNodeVaoCay(TREE* t, int x);
int TimMax(TREE t);
int TimMin(TREE t);
int ChieuCaoCay(TREE t);
void DiTimNodeTheMang(NODE** x, NODE** y);
void XoaNode(TREE* t, int x);
void Traversal();
bool find_val(TREE t, int x);
void balanceBST();
bool check_balance();

#endif

