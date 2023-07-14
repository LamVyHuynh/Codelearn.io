#include <stdio.h>
#include <math.h>
int main()
{
    // CHƯƠNG TRÌNH TÌM XÉT SỐ CHÍNH PHƯƠNG
    int n, a;
    printf("Nhap so n vao: ");
    scanf("%d", &n);
    if (n > 0)
    {
        a = sqrt(n);
        if (a * a == n)
        {
            printf("So %d la so chinh phuong", a);
        }
        else
        {
            printf("So %d khong phai la so chinh phuong", a);
        }
    }
    return 0;
}