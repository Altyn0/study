#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    printf("Viet nam co bao nhieu dan toc anh em :\n ");
    printf("a. 52\nb. 53\nc. 54\nd. 55\n");
    printf("Xin moi ban chon dap an(a,b,c,d): ");
    char dapAn;
    scanf("%c", &dapAn);
    switch (dapAn)
    {
    case 'a':
        printf("Dap an ban chon la sai.");
        break;
    case 'b':
        printf("Dap an ban chon sai nua.");
        break;
    case 'c':
        printf("Dap an ban chon la dungr");
        break;
    case 'd':
        printf("Dap an ban chon da sai");
        break;
    case 'e':
        printf("See You Again");
        exit('e');
    default:
        printf("Vui long nhap lai dap an");
        break;
    }
    return 0;
}

