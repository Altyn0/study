#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    printf("1. Chuong trinh tinh hoc luc\n ");
    printf("2. Chuong trinh giai phuong trinh bac 1\n ");
    printf("3. chuong trinh giai chuong trinh bac 2\n");
    printf("4. Chuong trinh xay dung tinh tien dien \n");
    printf("5. Tinh chu vi dien tich/hinh vuong\n ");
    printf(" Xin moi ban chon chuong trinh(1,2,3,4,5): \n");
    int dapAn;
    scanf("%d", &dapAn);
    switch (dapAn)
    {
    case 1:
    {
        float diem;
        // xuat diem cua ban
        printf("nhap diem cua ban :");
        scanf("%f", &diem);
        if (diem < 0 || diem > 10)
        {
            printf("Diem khong hop le. Vui long nhap diem trong khoang 0-10.\n");
        }
        else if (diem >= 9)
        {
            printf("Hoc luc: Xuat sac %.2f \n ", diem);
        }
        else if (diem >= 8)
        {
            printf("Hoc luc: Gioi %.2f \n", diem);
        }
        else if (diem >= 6.5)
        {
            printf("Hoc luc: Kha %.2f \n", diem);
        }
        else if (diem >= 5)
        {
            printf("Hoc luc: Trung binh %.2f \n", diem);
        }
        else if (diem >= 3.5)
        {
            printf("Hoc luc: Yeu %.2f \n", diem);
        }
        else
        {
            printf("Hoc luc: Kem %.2f \n", diem);
        }
    }
    break;
    case 2:{
        printf("Chuong trinh giai phuong trinh bac 1 :");
    float a, b, x;
    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh vo so nghiem.\n");
        } else {
            printf("Phuong trinh vo nghiem.\n");
        }
    } else {
        // Tính nghiệm x
        x = -b / a;
        printf("Nghiem cua phuong trinh la: x = %.2f\n", x);
    } 
    }
        break;
    case 3:{
        printf("Chuong trinh giai phuong trinh bac 2");
    }   
        break;
    case 4:{
        printf("Dap an ban chon da sai");
    }
        
        break;
    case 0:
        printf("See You Again");
        exit(0);
    default:
        printf("Vui long chon lai lua chon co san");
        break;
    }
    return 0;
}