#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
    case 2:
    {
        printf("Chuong trinh giai phuong trinh bac 1 :");
        float a, b, x;
        printf("Nhap he so a: ");
        scanf("%f", &a);
        printf("Nhap he so b: ");
        scanf("%f", &b);
        if (a == 0)
        {
            if (b == 0)
            {
                printf("Phuong trinh vo so nghiem.\n");
            }
            else
            {
                printf("Phuong trinh vo nghiem.\n");
            }
        }
        else
        {
            // Tính nghiệm x
            x = -b / a;
            printf("Nghiem cua phuong trinh la: x = %.2f\n", x);
        }
    }
    break;
    case 3:
    {
        printf("Chuong trinh giai phuong trinh bac 2");
        float a, b, c, x, delta;

        x = 0;
        printf("Vui long nhap he so a,b,c");
        scanf("%f%f%f", &a, &b, &c);
        if (a == 0)
        {
            if (b == 0)
            {
                if (c == 0)
                {
                    printf("Phuong trinh co vo so nghiem. \n");
                }
                else
                {
                    printf("Phuong trinh Vo nghiem . \n");
                }
            }
            else
            {
                x = -c / b;
                printf("Phuong trinh co mot nghiem: x = %.2f \n", x);
            }
        }
        else
        {
            delta = b * b - 4 * a * c;
            if (delta < 0)
            {
                printf("Phuong trinh vo nghiem. \n");
            }
            else if (delta == 0)
            {
                x = -b / (2 * a);
                printf("Phuong trinh co nghiem kep: x=%.2f \n", x);
            }
            else
            {
                double x1 = (-b + sqrt(delta)) / (2 * a);

                double x2 = (-b - sqrt(delta)) / (2 * a);
                printf("Phuong trinh co hai nghiem phan biet: x1 = %.2lf va x2 =%.2lf\n", x1, x2);
            }
        }
    }
    break;
    case 4:
    {
        printf("Chuong trinh xay dung tinh tien dien");
        float kwh, tiendien=0;
        printf("\nNhap so dien tieu thu cua ban");
        scanf("%f",&kwh);   
        if (kwh<=50)
        {
            tiendien=kwh*1678;
        }else if (kwh <= 100)
        {
         tiendien=50*1678+(kwh-50)*1734;   
        }else if (kwh<=200)
        {
         tiendien=50*1678+50*1734+(kwh-100)*2014;   
        }
        else if (kwh<=300)
        {
         tiendien=50*1678+50*1734+100*2014+(kwh-200)*2536;   
        }
        else if (kwh<=400)
        {
         tiendien=50*1678+50*1734+100*2014+100*2536+(kwh-300)*2834;   
        }
        else{
            tiendien=50*1678+50*1734+100*2014+100*2536+100*2834+(kwh-400)*2927; 
             }
        printf("So tien dien ban can phai tra la : %.2f",tiendien);    
    }
    
    break;
    case 5:
    {
        printf("chuong trinh tinh chu vi dien  tich hinh chu nhat");
        float canh,chuVi=0,dienTich=0;
        printf("Vui long nhap canh ");
        scanf("%f",&canh);
        chuVi=4*canh;
        printf("Chu vi hinh vuong la : %.2f\n",chuVi);
        dienTich=canh*canh;
        printf("Dien tich hinh vuong la : %.2f\n",dienTich);
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
