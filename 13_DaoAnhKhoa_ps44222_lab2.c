#include <stdio.h> //thuvien
#define PI 3.14159
int main()
{
    /* int x, y, tong, hieu;
     tong = 0;
     hieu = 0;
     printf("nhap vao so x va y : ");
     scanf("%d%d", &x, &y);

     tong = x + y;
     printf("tong cua %d + %d = %d \n", x, y, tong);
     hieu = x - y;
     printf("hieu cua %d - %d = %d", x, y, hieu);
     return 0;*/

    // bai 2 xay dung chu vi dien tinh hcn.

    /*int chieudai,chieurong,chuvi,dientich;
    chuvi=0;
    dientich=0;
    printf("nhap chieu dai va chieu rong: ");
    scanf("%d%d",&chieudai,&chieurong);
    chuvi=(chieudai+chieurong)*2;
    printf("chu vi hinh chu nhat la: %d \n",chuvi);
    dientich=chieudai*chieurong;
    printf("Dien tich hinh chu nhat la: %d\n",dientich);
    return 0; */

    // bai 3 chu vi dien tich hinh tron
    /*float ban_kinh, chu_vi, dien_tich;

     // Nhập bán kính từ bàn phím
     printf("Nhap ban kinh cua duong tron: ");
     scanf("%f", &ban_kinh);

     // Tính chu vi và diện tích
     chu_vi = 2 * PI * ban_kinh;
     dien_tich = PI * ban_kinh * ban_kinh;

     // Hiển thị kết quả
     printf("Chu vi cua hinh tron la: %.2f\n", chu_vi);
     printf("Dien tich cua hinh tron la: %.2f\n", dien_tich);

     return 0;*/

    // Bai so 4 tinh diem trung binh toan ly hoa .
    /*
    float toan, ly, hoa, dtb;
    printf("nhap diem toan:");
    scanf("%f", &toan);
    printf("nhap diem ly:");
    scanf("%f", &ly);
    printf("nhap diem hoa:");
    scanf("%f", &hoa);
    dtb = (toan * 3 + ly * 2 + hoa * 1) / (3 + 2 + 1);
    printf("diem trung binh cua ban la:%.2f", dtb);
    return 0;*/

    //bai so 5 tinh nghiem cua phuong trinh bac 1 
     float a, b, x;

    // Nhập hệ số a và b từ bàn phím
    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);

        // Tính nghiệm x
        x = -b / a;
        printf("Nghiem cua phuong trinh la: x = %.2f\n", x);
   

    return 0;
}



