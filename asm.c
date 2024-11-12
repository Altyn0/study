#include <stdio.h>
#include <stdlib.h>
int main()
{
    int menu;
    printf("xin hay lua chon cac chuc nang tuong ung ma ban muon thuc hien 1:\n");
    printf("1. Chuc nang kiem tra so nguyen \n");
    printf("2. Chuc nang tim uoc so chung va boi so chung cua 2 so N\n");
    printf("3. Chuc nang tinh tien cho quan Karaoke\n");
    printf("4. Chuc nang tinh tien dien\n");
    printf("5. Chuc nang doi tien \n");
    printf("6. Chuc nang tinh lai suat vay ngan hang tra gop\n");
    printf("7. Chuc nang vay tien mua xe\n");
    printf("8. Chuc nang sap xep thong tin sinh vien\n");
    printf("9. Chuc nang xay dung game FPOLY-LOTT\n");
    printf("10. Chuc nang xay dung chuong trinh tinh toan phan so\n");
    printf("vui long nhap vao chuc nang:");
    scanf("%d", &menu);
    switch (menu)
    {
    case 1:{
        printf("kiem tra so nguyen dang thuc hien\n");
    }
        break;
    case 2:{
        printf("tim uoc so chung boi so chung 2 so dang thuc hien\n");
    }
        break;
    case 3:{
        printf("tinh tien cho quan karaoke dang thuc hien\n");
    }
        break;
    case 4:{
        printf("chuc nang tinh tien dien dang thuc hien \n");
    }
        break;
    case 5:{
        printf("chuc nang quy doi tien dang thuc hien");
    }
        break;
    case 6:{
        printf("tinh lai suat vay ngan hang dang thuc hien\n");
    }
        break;
    case 7:{
        printf("chuc nang vay tien mua xe dang thuc hien \n");
    }
        break;
    case 8:{
        printf("chuc nang sap xep thong sinh vien dang thuc hien \n");
    }
        break;
    case 9:{
        printf("chuc nang xay dung game fpoly-lott\n");
    }
        break;
    case 10:{
        printf("chuc nang xay dung chuong trinh tinh phan so dang thuc hien\n");
    }
        break;
    case 0:{
        printf("see u again sir/ms\n");
        exit(0);
    }
        break;
    default:
     printf("Vui long chon lai lua chon co san");
        break;
    }
    return 0;
}