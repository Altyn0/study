#include <stdio.h>

int main() {
    int x, y, z, a, zz;
    x = 10;
    y = 21;
    z = ++x + y--;  // Tăng x lên 1, sau đó cộng với y rồi giảm y
    a = x % y;      // Phép chia lấy dư của x và y
    zz = ++z + (x % y);  // Tăng z lên 1, sau đó cộng với phần dư của x và y
    
    // Hiển thị kết quả
    printf("so Z la: %d\n", z);
    printf("so a la: %d\n", a); 
    printf("so ZZ la: %d\n", zz);

    return 0;
}
