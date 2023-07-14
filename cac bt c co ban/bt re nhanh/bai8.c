#include <stdio.h>
int main()
{

    // CHƯƠNG TRÌNH SẮP XẾP CÁC SỐ HÀNG CHỤC, HÀNG TRĂM VÀ HÀNG ĐƠN VỊ THEO THỨ TỰ TĂNG DẦN
    int n, doi, a, b, c;
    printf("Nhap so nguyen n gom 3 chu so: ");
    scanf("%d", &n);

    a = n / 100;
    b = ((n % 100) / 10);
    c = n % 10;
    if (a > b)
    {
        doi = a;
        a = b;
        b = doi;
    }

    if (b > c)
    {
        doi = b;
        b = c;
        c = doi;
    }

    if (a > b)

    {

        doi = a;

        a = b;

        b = doi;
    }

    printf("%d%d%d", a, b, c);

    return 0;
}