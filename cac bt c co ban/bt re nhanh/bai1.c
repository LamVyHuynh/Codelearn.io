#include <stdio.h>
int main()
{
    int a;
    printf("Nhap so nguyen a vao: ");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("So %d la so duong", a);
    }

    else if (a < 0)
    {
        printf("So %d la so am", a);
    }

    else
    {
        printf("Khong the xac dinh duoc");
    }
    return 0;
}