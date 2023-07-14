#include <stdio.h>
int main()
{
    // CHƯƠNG TRÌNH XÉT TAM GIÁC VỚI 3 CẠNH XÁC ĐỊNH CÓ PHẢI ALF TAM GIÁC ĐỀU HAY KHÔNG
    int a, b, c;
    printf("Nhap do dai canh a: ");
    scanf("%d", &a);
    printf("Nhap do dai canh b: ");
    scanf("%d", &b);
    printf("Nhap do dai canh c: ");
    scanf("%d", &c);
    if (a >= 0 && b >= 0 && c >= 0)
    {
        if (a == b && a == c)
        {
            printf("Hinh tam giac voi do dai 3 canh a,b,c: %d, %d,%d la tam giac deu", a, b, c);
        }
        else
        {
            printf("Hinh tam giac voi do dai 3 canh a,b,c: %d, %d,%d khong la tam giac deu", a, b, c);
        }
    }
    return 0;
}