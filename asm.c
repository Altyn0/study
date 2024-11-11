#include <stdio.h>
int main()
{
    int menu;
    printf("xin chao cac ban den voi ass 1:\n");
    printf("1. Chuc nang tim tinh nguyen cua mot so\n");
    printf("2. Chuc nang tim UCLN va BCNN\n");
    printf("3. Chuc nang tinh tien Karaoke\n");
    printf("4. Chuc nang tinh tien dien\n");
    printf("5. Chuc nang doi tien \n");
    printf("6. Chuc nang tinh lai suat vay ngan hang tra gop\n");
    printf("7. Chuc nang vay tien mua xe\n");
    printf("8. Chuc nang sap xep thong tin sinh vien\n");
    printf("9. Chuc nang xay dung game FPOLY-LOTT\n");
    printf("10. Chuc nang xay dung truong trinh tinh toan phan so\n");
    printf("vui long nhap vao chuc nang:");


    scanf("%d", &menu);
    if(menu == 1)
    {
        printf("1. Chuc nang tim tinh nguyen cua mot so");
    }
    else if (menu == 2)
    {
        printf("2. Chuc nang tim UCLN va BCNN");
    }
    else if (menu == 3)
    {
        printf("3. Chuc nang tinh tien Karaoke");
    }
    else if (menu == 4)
    {
        printf("4. Chuc nang tinh tien dien");
    }
    else if(menu == 5)
    {
        printf("5. Chuc nang doi tien ");
    }
    else if(menu == 6)
    {
        printf("6. Chuc nang tinh lai suat vay ngan hang tra gop ");
    }
    else if(menu == 7)
    {
        printf("7. Chuc nang vay tien mua xe ");
    }
    else if(menu == 8)
    {
        printf("8. Chuc nang sap xep thong tin sinh vien");
    }
    else if(menu == 9)
    {
        printf("9. Chuc nang xay dung game FPOLY-LOTT ");
    }
    else if(menu == 10)
    {
        printf("10. Chuc nang xay dung truong trinh tinh toan phan so ");
    }
    else
    {
        printf("co 10 so mu ha");
    }
    return 0;
}