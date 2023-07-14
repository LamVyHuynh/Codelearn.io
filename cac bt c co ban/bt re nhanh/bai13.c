#include <stdio.h>
int main()
{
    // CHƯƠNG TRÌNH KIỂM TRA ĐỘ DÀI CỦA 3 CẠNH CÓ PHẢI LÀ 3 CẠNH CỦA 1 HÌNH TAM GIÁC VUÔNG KHÔNG
    int a, b, c, A, B, C;
    printf("Nhap do dai canh a: ");
    scanf("%d", &a);
    printf("Nhap do dai canh b: ");
    scanf("%d", &b);
    printf("Nhap do dai canh c: ");
    scanf("%d", &c);
    A = a * a;
    B = b * b;
    C = c * c;
    if (a >= 0 && b >= 0 && c >= 0)
    {
        if (A == B + C || B == A + C || C == A + B)
        {
            printf("Hinh co do dai 3 canh a,b,c: %d, %d, %d la hinh tam giac vuong", a, b, c);
        }
        else
        {
            printf("Hinh co do dai 3 canh a,b,c: %d, %d, %d khong phai hinh tam giac vuong", a, b, c);
        }
    }
    else
    {
        printf("Xin vui long nhap lai so!!!!");
    }
    return 0;
}