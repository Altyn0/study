#include <stdio.h>
int main()
{
    float n;
    printf("Nhap n");
    scanf("%f", &n);
    // dieukien
    if (n >= 9)
    {
        printf("hs xuat sac");
    }
    else if (n >= 8)
    {
        printf("hs gioi");
    }
    else if (n >= 6.5)
    {
        printf("hs kha");
    }
    else if (n >= 5)
    {
        printf("hs trb");
    }
    else if (n >= 3.5)
    {
        printf("hs yeu");
    }
    else
    {
        printf("Hoc luc kem");
    }
    return 0;
}