#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#include "BST.h"

extern int cnt_node;

void Menu(TREE* t)
{
    while (1)
    {
        system("cls");
        printf("\n\n\t\t========== MENU ==========");
        printf("\n\t1. Nhap du lieu");
        printf("\n\t2. Tim max cua cay");
        printf("\n\t3. Tim min cua cay");
        printf("\n\t4. Chieu cao cua cay");
        printf("\n\t5. Xoa 1 node bat ki");
        printf("\n\t6. In ra cac node trong mot cay");
        printf("\n\t7. Tim kiem mot phan tu trong cay");
        printf("\n\t8. Can bang lai cay BST");
        printf("\n\t9. Kiem tra cay nhi phan co can bang hay khong?");
        printf("\n\t10. Tinh so luong node trong cay");

        printf("\n\t0. Ket thuc");

        int luachon;
        printf("\n\tNhap lua chon: ");
        scanf("%d", &luachon);

        if (luachon == 0)
        {
            break;
        }
        else if (luachon == 1)
        {
            int x;
            printf("Nhap gia tri x: ");
            scanf("%d", &x);
            ThemNodeVaoCay(t, x);
        }
        else if (luachon == 2)
        {
            if (*t != NULL)
                printf("Max: %d\n", TimMax(*t));
            else
                printf("Cay rong!\n");
            system("pause");
        }
        else if (luachon == 3)
        {
            if (*t != NULL)
                printf("Min: %d\n", TimMin(*t));
            else
                printf("Cay rong!\n");
            system("pause");
        }
        else if (luachon == 4)
        {
            printf("Chieu cao cua cay: %d\n", ChieuCaoCay(*t));
            system("pause");
        }
        else if (luachon == 5)
        {
            int x;
            printf("Nhap gia tri can xoa: ");
            scanf("%d", &x);
            XoaNode(t, x);
            printf("Da xoa!\n");
            system("pause");
        }
        else if (luachon == 6)
        {
            Traversal(*t);
            system("pause");
        }
        else if (luachon == 7)
        {
            printf("Nhap gia tri can tim kiem: ");
            int x;
            scanf("%d", &x);
            bool res = find_val(*t, x);
            if(res == 1) {
                printf("Gia tri ton tai trong cay\n");
            }
            else printf("Gia tri khong ton tai trong cay\n");
            system("pause");
        }
        else if (luachon == 8) 
        {
            balanceBST();
            printf("Cay nhi phan da duoc can bang\n");
            system("pause");
        }
        else if (luachon == 9) 
        {
            bool res = check_balance(*t);
            if(res == 1) {
                printf("Day la cay nhi phan can bang\n");
            }
            else printf("Day la cay nhi phan khong can bang\n");
            system("pause");
        }
        else if(luachon == 10) 
        {
            printf("so luong node trong cay la ");
            printf("%d", cnt_node);
            print("\n");
            system("pause");
        }
        else
        {
            printf("Lua chon khong hop le!\n");
            system("pause");
        }
    }
}

