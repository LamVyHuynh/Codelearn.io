#include <stdio.h>
int main()
{

    // CHƯƠNG TRÌNH SẮP XẾP CÁC SỐ THEO THỨ TỰ TĂNG DẦN
    int a, b, c, trung_gian;
    printf("Nhap vao so a: ");
    scanf("%d", &a);
    printf("Nhap vao so b: ");
    scanf("%d", &b);
    printf("Nhap vao so c: ");
    scanf("%d", &c);
    // THUẬT TOÁN GIÚP ĐỔI CHỖ CÁC CON SỐ VỚI NHAU
    if (a > b)
    {
        trung_gian = a;
        a = b;
        b = trung_gian;
    }
    if (b > c)
    {
        trung_gian = b;
        b = c;
        c = trung_gian;
    }

    printf("Day so duoc sap xep theo thu tu tang dan la: %d %d %d", a, b, c);
}