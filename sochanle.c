#include <stdio.h>
int main(){
    int n;
    printf("Nhap n");
    scanf("%d",&n);
    //dieukien
    if (n%2==0)
    {
        printf("N la so chan: %d",n);
    } else{
        printf(" N la so le: %d",n);
    }
    return 0;
}